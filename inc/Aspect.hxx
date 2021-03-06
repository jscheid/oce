// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_HeaderFile
#define _Aspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Aspect_FormatOfSheetPaper_HeaderFile
#include <Aspect_FormatOfSheetPaper.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_ExtendedString;
class TColStd_Array2OfReal;
class Aspect_ColorMap;
class Aspect_ColorCubeColorMap;
class Aspect_ColorRampColorMap;
class Aspect_GenericColorMap;
class Aspect_ColorMapEntry;
class Aspect_Pixel;
class Aspect_IndexPixel;
class Aspect_ColorPixel;
class Aspect_AspectLine;
class Aspect_AspectMarker;
class Aspect_AspectFillArea;
class Aspect_Background;
class Aspect_GradientBackground;
class Aspect_Edge;
class Aspect_GenId;
class Aspect_FontStyle;
class Aspect_FontMapEntry;
class Aspect_FontMap;
class Aspect_WidthMapEntry;
class Aspect_WidthMap;
class Aspect_LineStyle;
class Aspect_TypeMap;
class Aspect_TypeMapEntry;
class Aspect_MarkerStyle;
class Aspect_MarkMap;
class Aspect_MarkMapEntry;
class Aspect_Window;
class Aspect_Driver;
class Aspect_WindowDriver;
class Aspect_Grid;
class Aspect_RectangularGrid;
class Aspect_CircularGrid;
class Aspect_ColorScale;
class Aspect_Array1OfEdge;
class Aspect_SequenceOfColorMapEntry;
class Aspect_SequenceOfTypeMapEntry;
class Aspect_SequenceOfWidthMapEntry;
class Aspect_SequenceOfFontMapEntry;
class Aspect_SequenceOfMarkMapEntry;
class Aspect_SequenceOfColor;
class Aspect_SequenceNodeOfSequenceOfColorMapEntry;
class Aspect_SequenceNodeOfSequenceOfTypeMapEntry;
class Aspect_SequenceNodeOfSequenceOfWidthMapEntry;
class Aspect_SequenceNodeOfSequenceOfFontMapEntry;
class Aspect_SequenceNodeOfSequenceOfMarkMapEntry;
class Aspect_SequenceNodeOfSequenceOfColor;


//! This package contains the group of graphic elements common <br>
//!          to different types of visualisers. It allows the description <br>
//!          of a screen background, a window, an edge, and groups of <br>
//!          graphic attributes that can be used in describing 2D <br>
//!          and 3D objects. <br>
class Aspect  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the format size according to the default <br>
//!      LENGTH unit of the required format <aFOSP>. <br>
//!      Returns more the normalized format name. <br>
  Standard_EXPORT   static  Standard_CString ValuesOfFOSP(const Aspect_FormatOfSheetPaper aFOSP,Quantity_Length& aWidth,Quantity_Length& aHeight) ;
  //! Translates an ExtendedString to a CString <br>
//!          depending of the local format. <br>
  Standard_EXPORT   static  Standard_CString ToCString(const TCollection_ExtendedString& aString) ;
  //! Inverses <aMat> a 4x4 matrix. <br>
  Standard_EXPORT   static  Standard_Boolean Inverse(const TColStd_Array2OfReal& aMat,TColStd_Array2OfReal& Inv) ;





protected:





private:




friend class Aspect_ColorMap;
friend class Aspect_ColorCubeColorMap;
friend class Aspect_ColorRampColorMap;
friend class Aspect_GenericColorMap;
friend class Aspect_ColorMapEntry;
friend class Aspect_Pixel;
friend class Aspect_IndexPixel;
friend class Aspect_ColorPixel;
friend class Aspect_AspectLine;
friend class Aspect_AspectMarker;
friend class Aspect_AspectFillArea;
friend class Aspect_Background;
friend class Aspect_GradientBackground;
friend class Aspect_Edge;
friend class Aspect_GenId;
friend class Aspect_FontStyle;
friend class Aspect_FontMapEntry;
friend class Aspect_FontMap;
friend class Aspect_WidthMapEntry;
friend class Aspect_WidthMap;
friend class Aspect_LineStyle;
friend class Aspect_TypeMap;
friend class Aspect_TypeMapEntry;
friend class Aspect_MarkerStyle;
friend class Aspect_MarkMap;
friend class Aspect_MarkMapEntry;
friend class Aspect_Window;
friend class Aspect_Driver;
friend class Aspect_WindowDriver;
friend class Aspect_Grid;
friend class Aspect_RectangularGrid;
friend class Aspect_CircularGrid;
friend class Aspect_ColorScale;
friend class Aspect_Array1OfEdge;
friend class Aspect_SequenceOfColorMapEntry;
friend class Aspect_SequenceOfTypeMapEntry;
friend class Aspect_SequenceOfWidthMapEntry;
friend class Aspect_SequenceOfFontMapEntry;
friend class Aspect_SequenceOfMarkMapEntry;
friend class Aspect_SequenceOfColor;
friend class Aspect_SequenceNodeOfSequenceOfColorMapEntry;
friend class Aspect_SequenceNodeOfSequenceOfTypeMapEntry;
friend class Aspect_SequenceNodeOfSequenceOfWidthMapEntry;
friend class Aspect_SequenceNodeOfSequenceOfFontMapEntry;
friend class Aspect_SequenceNodeOfSequenceOfMarkMapEntry;
friend class Aspect_SequenceNodeOfSequenceOfColor;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
