#ifndef MEDIA_LINE_H
#define MEDIA_LINE_H

#include <dbus-c++/dbus.h>

// TODO: add getters
typedef ::DBus::Struct< std::string, int32_t, int32_t > Line_Dbus_t;

class Line
{
public:
  enum LineType
  {
    Title,
    Folder,
    FolderUp,
    Playlist,
    Invalid
  };

  static const int32_t InvalidID = -1;

  Line();

  std::string name;
  int32_t type;
  int32_t id;

public:
  void operator << (const Line_Dbus_t &pos)
  {
    name = pos._1;
    type = pos._2;
    id = pos._3;
  }
};

Line_Dbus_t &operator << (Line_Dbus_t &s1, const Line &s2);

#endif // MEDIA_LINE_H
