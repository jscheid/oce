// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#define GER61351		//GG_171199     Enable to set an object RGB color
//						  instead a restricted object NameOfColor.

#include <Prs3d_LineAspect.ixx>

#ifdef GER61351
Prs3d_LineAspect::Prs3d_LineAspect (const Quantity_Color &aColor,
				const Aspect_TypeOfLine aType,
				const Standard_Real aWidth) {
  myAspect = new Graphic3d_AspectLine3d(aColor,aType,aWidth);
}
#endif

Prs3d_LineAspect::Prs3d_LineAspect (const Quantity_NameOfColor aColor,
				const Aspect_TypeOfLine aType,
				const Standard_Real aWidth) {

  myAspect = new Graphic3d_AspectLine3d
    (Quantity_Color(aColor),aType,aWidth);
}

#ifdef GER61351
void Prs3d_LineAspect::SetColor(const Quantity_Color &aColor) {
 myAspect->SetColor(aColor);
}
#endif

void Prs3d_LineAspect::SetColor(const Quantity_NameOfColor aColor) {
  myAspect->SetColor(Quantity_Color(aColor));
}

void Prs3d_LineAspect::SetTypeOfLine(const Aspect_TypeOfLine aType){
  myAspect->SetType(aType);
}

void Prs3d_LineAspect::SetWidth(const Standard_Real aWidth){
  myAspect->SetWidth(aWidth);
}

Handle (Graphic3d_AspectLine3d) Prs3d_LineAspect::Aspect () const {
  return myAspect;
}
