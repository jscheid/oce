// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SingleProtection_HeaderFile
#define _OSD_SingleProtection_HeaderFile

//! Access rights for files. <br>
//!          R means Read, W means Write, X means eXecute and D means Delete. <br>
//!          On UNIX, the right to Delete is combined with Write access. <br>
//!          So if "W"rite is not set and "D"elete is, "W"rite will be set <br>
//!          and if "W" is set, "D" will be too. <br>
enum OSD_SingleProtection {
OSD_None,
OSD_R,
OSD_W,
OSD_RW,
OSD_X,
OSD_RX,
OSD_WX,
OSD_RWX,
OSD_D,
OSD_RD,
OSD_WD,
OSD_RWD,
OSD_XD,
OSD_RXD,
OSD_WXD,
OSD_RWXD
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
