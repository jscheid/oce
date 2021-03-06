// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCPnts_TangentialDeflection_HeaderFile
#define _GCPnts_TangentialDeflection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_SequenceOfPnt_HeaderFile
#include <TColgp_SequenceOfPnt.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class Adaptor3d_Curve;
class Adaptor2d_Curve2d;
class gp_Pnt;


//!  Computes a set of  points on a curve from package <br>
//!          Adaptor3d  such  as between  two successive   points <br>
//!          P1(u1)and P2(u2) : <br>
//! <br>
//!         . ||P1P3^P3P2||/||P1P3||*||P3P2||<AngularDeflection <br>
//!         . ||P1P2^P1P3||/||P1P2||*||P1P3||<CurvatureDeflection <br>
//! <br>
//!         where P3 is the point of abscissa ((u1+u2)/2), with <br>
//!         u1 the abscissa of the point P1 and u2 the abscissa <br>
//!         of the point P2. <br>
//! <br>
//!         ^ is the cross product of two vectors, and ||P1P2|| <br>
//!         the magnitude of the vector P1P2. <br>
//! <br>
//!         The conditions AngularDeflection > gp::Resolution() <br>
//!         and CurvatureDeflection > gp::Resolution() must be <br>
//!         satisfied at the construction time. <br>
//! <br>
//!         A  minimum  number of points  can  be fixed   for a <br>
//!         linear or circular element. <br>
//!  Example: <br>
//!          Handle(Geom_BezierCurve) C = new Geom_BezierCurve (Poles); <br>
//!          GeomAdaptor_Curve Curve (C); <br>
//!          Real CDeflect = 0.01;  //Curvature deflection <br>
//!          Real ADeflect = 0.09; //Angular deflection <br>
//! <br>
//!          GCPnts_TangentialDeflection PointsOnCurve; <br>
//!          PointsOnCurve.Initialize (Curve, ADeflect, CDeflect); <br>
//! <br>
//!          Real U; <br>
//!          gp_Pnt P; <br>
//!          for (Integer i=1; i<=PointsOnCurve.NbPoints();i++) { <br>
//!            U = PointsOnCurve.Parameter (i); <br>
//!            P = PointsOnCurve.Value (i); <br>
//!          } <br>
//! <br>
class GCPnts_TangentialDeflection  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GCPnts_TangentialDeflection();
  
  Standard_EXPORT   GCPnts_TangentialDeflection(const Adaptor3d_Curve& C,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9);
  
  Standard_EXPORT   GCPnts_TangentialDeflection(const Adaptor3d_Curve& C,const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9);
  
  Standard_EXPORT   GCPnts_TangentialDeflection(const Adaptor2d_Curve2d& C,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9);
  
  Standard_EXPORT   GCPnts_TangentialDeflection(const Adaptor2d_Curve2d& C,const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9);
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9) ;
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9) ;
  
  Standard_EXPORT     void Initialize(const Adaptor2d_Curve2d& C,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9) ;
  
  Standard_EXPORT     void Initialize(const Adaptor2d_Curve2d& C,const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Real AngularDeflection,const Standard_Real CurvatureDeflection,const Standard_Integer MinimumOfPoints = 2,const Standard_Real UTol = 1.0e-9) ;
  //! Add point to already calculated points (or replace existing) <br>
//!          Returns index of new added point <br>
//!           or founded with parametric tolerance (replaced if theIsReplace is true) <br>
  Standard_EXPORT     Standard_Integer AddPoint(const gp_Pnt& thePnt,const Standard_Real theParam,const Standard_Boolean theIsReplace = Standard_True) ;
  
        Standard_Integer NbPoints() const;
  
        Standard_Real Parameter(const Standard_Integer I) const;
  
        gp_Pnt Value(const Standard_Integer I) const;





protected:





private:

  
  Standard_EXPORT     void PerformLinear(const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT     void PerformLinear(const Adaptor2d_Curve2d& C) ;
  
  Standard_EXPORT     void PerformCircular(const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT     void PerformCircular(const Adaptor2d_Curve2d& C) ;
  
  Standard_EXPORT     void PerformCurve(const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT     void PerformCurve(const Adaptor2d_Curve2d& C) ;
  
  Standard_EXPORT     void EvaluateDu(const Adaptor3d_Curve& C,const Standard_Real U,gp_Pnt& P,Standard_Real& Du,Standard_Boolean& NotDone) const;
  
  Standard_EXPORT     void EvaluateDu(const Adaptor2d_Curve2d& C,const Standard_Real U,gp_Pnt& P,Standard_Real& Du,Standard_Boolean& NotDone) const;


Standard_Real angularDeflection;
Standard_Real curvatureDeflection;
Standard_Real uTol;
Standard_Integer minNbPnts;
Standard_Real lastu;
Standard_Real firstu;
TColgp_SequenceOfPnt points;
TColStd_SequenceOfReal parameters;


};


#include <GCPnts_TangentialDeflection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
