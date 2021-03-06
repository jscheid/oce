// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_SectionedArea_HeaderFile
#define _IGESDimen_SectionedArea_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_SectionedArea_HeaderFile
#include <Handle_IGESDimen_SectionedArea.hxx>
#endif

#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESData_IGESEntity;
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class gp_XYZ;
class gp_Pnt;


//! defines IGES Sectioned Area, Type <230> Form <0>, <br>
//!          in package IGESDimen <br>
//!          A sectioned area is a portion of a design which is to be <br>
//!          filled with a pattern of lines. Ordinarily, this entity <br>
//!          is used to reveal or expose shape or material characteri- <br>
//!          stics defined by other entities. It consists of a pointer <br>
//!          to an exterior definition curve, a specification of the <br>
//!          pattern of lines, the coordinates of a point on a pattern <br>
//!          line, the distance between the pattern lines, the angle <br>
//!          between the pattern lines and the X-axis of definition <br>
//!          space, and the specification of any enclosed definition <br>
//!          curves (commonly known as islands). <br>
class IGESDimen_SectionedArea : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_SectionedArea();
  
  Standard_EXPORT     void Init(const Handle(IGESData_IGESEntity)& aCurve,const Standard_Integer aPattern,const gp_XYZ& aPoint,const Standard_Real aDistance,const Standard_Real anAngle,const Handle(IGESData_HArray1OfIGESEntity)& someIslands) ;
  //! Sets the cross hatches to be inverted or not, <br>
//!           according value of <mode> (corresponds to FormNumber) <br>
  Standard_EXPORT     void SetInverted(const Standard_Boolean mode) ;
  //! Returns True if cross hatches as Inverted, else they are <br>
//!           Standard (Inverted : Form=1, Standard : Form=0) <br>
  Standard_EXPORT     Standard_Boolean IsInverted() const;
  //! returns the exterior definition curve <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity ExteriorCurve() const;
  //! returns fill pattern code <br>
  Standard_EXPORT     Standard_Integer Pattern() const;
  //! returns point thru which line should pass <br>
  Standard_EXPORT     gp_Pnt PassingPoint() const;
  //! returns point thru which line should pass after Transformation <br>
  Standard_EXPORT     gp_Pnt TransformedPassingPoint() const;
  //! returns the Z depth <br>
  Standard_EXPORT     Standard_Real ZDepth() const;
  //! returns the normal distance between lines <br>
  Standard_EXPORT     Standard_Real Distance() const;
  //! returns the angle of lines with XT axis <br>
  Standard_EXPORT     Standard_Real Angle() const;
  //! returns the number of island curves <br>
  Standard_EXPORT     Standard_Integer NbIslands() const;
  //! returns the interior definition curves, returns Null Handle <br>
//! exception raised if Index <= 0 or Index > NbIslands() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity IslandCurve(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDimen_SectionedArea)

protected:




private: 


Handle_IGESData_IGESEntity theExteriorCurve;
Standard_Integer thePattern;
gp_XYZ thePassingPoint;
Standard_Real theDistance;
Standard_Real theAngle;
Handle_IGESData_HArray1OfIGESEntity theIslandCurves;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
