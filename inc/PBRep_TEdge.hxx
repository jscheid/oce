// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_TEdge_HeaderFile
#define _PBRep_TEdge_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PBRep_TEdge_HeaderFile
#include <Handle_PBRep_TEdge.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PBRep_CurveRepresentation_HeaderFile
#include <Handle_PBRep_CurveRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _PTopoDS_TEdge_HeaderFile
#include <PTopoDS_TEdge.hxx>
#endif
class PBRep_CurveRepresentation;


class PBRep_TEdge : public PTopoDS_TEdge {

public:

  //! Creates an empty TEdge. <br>
  Standard_EXPORT   PBRep_TEdge();
  
  Standard_EXPORT     Standard_Real Tolerance() const;
  
  Standard_EXPORT     void Tolerance(const Standard_Real T) ;
  
  Standard_EXPORT     Standard_Boolean SameParameter() const;
  
  Standard_EXPORT     void SameParameter(const Standard_Boolean S) ;
  
  Standard_EXPORT     Standard_Boolean SameRange() const;
  
  Standard_EXPORT     void SameRange(const Standard_Boolean S) ;
  
  Standard_EXPORT     Standard_Boolean Degenerated() const;
  
  Standard_EXPORT     void Degenerated(const Standard_Boolean S) ;
  
  Standard_EXPORT     Handle_PBRep_CurveRepresentation Curves() const;
  
  Standard_EXPORT     void Curves(const Handle(PBRep_CurveRepresentation)& C) ;

PBRep_TEdge(const Storage_stCONSTclCOM& a) : PTopoDS_TEdge(a)
{
  
}
    Standard_Real _CSFDB_GetPBRep_TEdgemyTolerance() const { return myTolerance; }
    void _CSFDB_SetPBRep_TEdgemyTolerance(const Standard_Real p) { myTolerance = p; }
    Standard_Integer _CSFDB_GetPBRep_TEdgemyFlags() const { return myFlags; }
    void _CSFDB_SetPBRep_TEdgemyFlags(const Standard_Integer p) { myFlags = p; }
    Handle(PBRep_CurveRepresentation) _CSFDB_GetPBRep_TEdgemyCurves() const { return myCurves; }
    void _CSFDB_SetPBRep_TEdgemyCurves(const Handle(PBRep_CurveRepresentation)& p) { myCurves = p; }



  DEFINE_STANDARD_RTTI(PBRep_TEdge)

protected:




private: 


Standard_Real myTolerance;
Standard_Integer myFlags;
Handle_PBRep_CurveRepresentation myCurves;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
