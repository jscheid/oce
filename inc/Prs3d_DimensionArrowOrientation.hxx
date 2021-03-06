// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_DimensionArrowOrientation_HeaderFile
#define _Prs3d_DimensionArrowOrientation_HeaderFile

//! Specifies dimension arrow location and orientation. <br>
//! DAO_Internal - arrows "inside", pointing outwards. <br>
//! DAO_External - arrows "outside", pointing inwards. <br>
//! DAO_Fit      - arrows oriented inside if value label with arrowtips fit the dimension line, <br>
//!                otherwise - externally <br>
enum Prs3d_DimensionArrowOrientation {
Prs3d_DAO_Internal,
Prs3d_DAO_External,
Prs3d_DAO_Fit
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
