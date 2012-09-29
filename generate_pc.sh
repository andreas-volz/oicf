#!/bin/bash

PC_TEMPLATE=pc_generate.ac
MK_TEMPLATE=pc_generate.mk

function create_pc
{
  sed "s/%LIBRARY%/OICF"$2"/g" OICFTemplate"$3".pc.in | 
  sed "s/%LIBRARY_DIR%/OICF"$1"/g" |
  sed "s/"%LIBRARY_NAME%"/"$2"/g" > OICF"$2""$3".pc.in
}

function create_pc_wrap
{
  NAME=$1

  create_pc "$NAME" "$NAME"
  create_pc "$NAME" "$NAME"Provider
  
  create_pc "$NAME" "$NAME" "-uninstalled"
  create_pc "$NAME" "$NAME"Provider "-uninstalled"

  echo "OICF${NAME}.pc" >> $PC_TEMPLATE
  echo "OICF${NAME}-uninstalled.pc" >> $PC_TEMPLATE
  echo "OICF${NAME}Provider.pc" >> $PC_TEMPLATE
  echo "OICF${NAME}Provider-uninstalled.pc" >> $PC_TEMPLATE

  echo -n "OICF${NAME}.pc " >> $MK_TEMPLATE
  echo -n "OICF${NAME}Provider.pc " >> $MK_TEMPLATE
}

## main

echo "# Copy and paste this into configure.ac..." > $PC_TEMPLATE
echo "" >> $PC_TEMPLATE
echo "AC_OUTPUT([" >> $PC_TEMPLATE

echo "# Copy and paste this into Makefile.am..." > $MK_TEMPLATE
echo "" >> $MK_TEMPLATE
echo "" >> $MK_TEMPLATE
echo -n "pkgconfig_DATA = " >> $MK_TEMPLATE

create_pc_wrap Media

create_pc_wrap Control

create_pc_wrap Navigation

create_pc_wrap Phone

create_pc_wrap Mail

echo "])" >> $PC_TEMPLATE

