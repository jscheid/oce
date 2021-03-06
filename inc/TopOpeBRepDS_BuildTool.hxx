// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_BuildTool_HeaderFile
#define _TopOpeBRepDS_BuildTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRep_Builder_HeaderFile
#include <BRep_Builder.hxx>
#endif
#ifndef _TopOpeBRepTool_CurveTool_HeaderFile
#include <TopOpeBRepTool_CurveTool.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopOpeBRepTool_OutCurveType_HeaderFile
#include <TopOpeBRepTool_OutCurveType.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_HDataStructure_HeaderFile
#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class TopOpeBRepTool_GeomTool;
class TopoDS_Shape;
class TopOpeBRepDS_Point;
class TopOpeBRepDS_Curve;
class TopOpeBRepDS_DataStructure;
class Geom_Curve;
class TopOpeBRepDS_Surface;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopoDS_Face;
class TopOpeBRepDS_HDataStructure;
class Geom2d_Curve;
class Geom_Surface;


//! Provides  a  Tool  to  build  topologies. Used  to <br>
//!          instantiate the Builder algorithm. <br>
class TopOpeBRepDS_BuildTool  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepDS_BuildTool();
  
  Standard_EXPORT   TopOpeBRepDS_BuildTool(const TopOpeBRepTool_OutCurveType OutCurveType);
  
  Standard_EXPORT   TopOpeBRepDS_BuildTool(const TopOpeBRepTool_GeomTool& GT);
  
  Standard_EXPORT    const TopOpeBRepTool_GeomTool& GetGeomTool() const;
  
  Standard_EXPORT     TopOpeBRepTool_GeomTool& ChangeGeomTool() ;
  
  Standard_EXPORT     void MakeVertex(TopoDS_Shape& V,const TopOpeBRepDS_Point& P) const;
  
  Standard_EXPORT     void MakeEdge(TopoDS_Shape& E,const TopOpeBRepDS_Curve& C) const;
  
  Standard_EXPORT     void MakeEdge(TopoDS_Shape& E,const TopOpeBRepDS_Curve& C,const TopOpeBRepDS_DataStructure& DS) const;
  
  Standard_EXPORT     void MakeEdge(TopoDS_Shape& E,const Handle(Geom_Curve)& C,const Standard_Real Tol) const;
  
  Standard_EXPORT     void MakeEdge(TopoDS_Shape& E) const;
  
  Standard_EXPORT     void MakeWire(TopoDS_Shape& W) const;
  
  Standard_EXPORT     void MakeFace(TopoDS_Shape& F,const TopOpeBRepDS_Surface& S) const;
  
  Standard_EXPORT     void MakeShell(TopoDS_Shape& Sh) const;
  
  Standard_EXPORT     void MakeSolid(TopoDS_Shape& S) const;
  //! Make an edge <Eou> with the curve of the edge <Ein> <br>
  Standard_EXPORT     void CopyEdge(const TopoDS_Shape& Ein,TopoDS_Shape& Eou) const;
  
  Standard_EXPORT     void GetOrientedEdgeVertices(TopoDS_Edge& E,TopoDS_Vertex& Vmin,TopoDS_Vertex& Vmax,Standard_Real& Parmin,Standard_Real& Parmax) const;
  
  Standard_EXPORT     void UpdateEdgeCurveTol(const TopoDS_Face& F1,const TopoDS_Face& F2,TopoDS_Edge& E,const Handle(Geom_Curve)& C3Dnew,const Standard_Real tol3d,const Standard_Real tol2d1,const Standard_Real tol2d2,Standard_Real& newtol,Standard_Real& newparmin,Standard_Real& newparmax) const;
  
  Standard_EXPORT     void ApproxCurves(const TopOpeBRepDS_Curve& C,TopoDS_Edge& E,Standard_Integer& inewC,const Handle(TopOpeBRepDS_HDataStructure)& HDS) const;
  
  Standard_EXPORT     void ComputePCurves(const TopOpeBRepDS_Curve& C,TopoDS_Edge& E,TopOpeBRepDS_Curve& newC,const Standard_Boolean CompPC1,const Standard_Boolean CompPC2,const Standard_Boolean CompC3D) const;
  
  Standard_EXPORT     void PutPCurves(const TopOpeBRepDS_Curve& newC,TopoDS_Edge& E,const Standard_Boolean CompPC1,const Standard_Boolean CompPC2) const;
  
  Standard_EXPORT     void RecomputeCurves(const TopOpeBRepDS_Curve& C,const TopoDS_Edge& oldE,TopoDS_Edge& E,Standard_Integer& inewC,const Handle(TopOpeBRepDS_HDataStructure)& HDS) const;
  //! Make a face <Fou> with the surface of the face <Fin> <br>
  Standard_EXPORT     void CopyFace(const TopoDS_Shape& Fin,TopoDS_Shape& Fou) const;
  
  Standard_EXPORT     void AddEdgeVertex(const TopoDS_Shape& Ein,TopoDS_Shape& Eou,const TopoDS_Shape& V) const;
  
  Standard_EXPORT     void AddEdgeVertex(TopoDS_Shape& E,const TopoDS_Shape& V) const;
  
  Standard_EXPORT     void AddWireEdge(TopoDS_Shape& W,const TopoDS_Shape& E) const;
  
  Standard_EXPORT     void AddFaceWire(TopoDS_Shape& F,const TopoDS_Shape& W) const;
  
  Standard_EXPORT     void AddShellFace(TopoDS_Shape& Sh,const TopoDS_Shape& F) const;
  
  Standard_EXPORT     void AddSolidShell(TopoDS_Shape& S,const TopoDS_Shape& Sh) const;
  //! Sets the parameter <P>  for  the vertex <V> on the <br>
//!          edge <E>. <br>
  Standard_EXPORT     void Parameter(const TopoDS_Shape& E,const TopoDS_Shape& V,const Standard_Real P) const;
  //! Sets the range of edge <E>. <br>
  Standard_EXPORT     void Range(const TopoDS_Shape& E,const Standard_Real first,const Standard_Real last) const;
  //! Sets the range of edge <Eou> from <Ein> <br>
//!          only when <Ein> has a closed geometry. <br>
  Standard_EXPORT     void UpdateEdge(const TopoDS_Shape& Ein,TopoDS_Shape& Eou) const;
  //! Compute the parameter of  the vertex <V>, supported <br>
//!          by   the edge <E>, on the curve  <C>. <br>
  Standard_EXPORT     void Parameter(const TopOpeBRepDS_Curve& C,TopoDS_Shape& E,TopoDS_Shape& V) const;
  //! Sets the  curve <C> for the edge  <E> <br>
  Standard_EXPORT     void Curve3D(TopoDS_Shape& E,const Handle(Geom_Curve)& C,const Standard_Real Tol) const;
  //! Sets  the pcurve <C> for  the edge <E> on the face <br>
//!          <F>.  If OverWrite is True the old pcurve if there <br>
//!          is one  is overwritten, else the  two  pcurves are <br>
//!          set. <br>
  Standard_EXPORT     void PCurve(TopoDS_Shape& F,TopoDS_Shape& E,const Handle(Geom2d_Curve)& C) const;
  
  Standard_EXPORT     void PCurve(TopoDS_Shape& F,TopoDS_Shape& E,const TopOpeBRepDS_Curve& CDS,const Handle(Geom2d_Curve)& C) const;
  
  Standard_EXPORT     void Orientation(TopoDS_Shape& S,const TopAbs_Orientation O) const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void Closed(TopoDS_Shape& S,const Standard_Boolean B) const;
  
  Standard_EXPORT     Standard_Boolean Approximation() const;
  
  Standard_EXPORT     void UpdateSurface(const TopoDS_Shape& F,const Handle(Geom_Surface)& SU) const;
  
  Standard_EXPORT     void UpdateSurface(const TopoDS_Shape& E,const TopoDS_Shape& oldF,const TopoDS_Shape& newF) const;
  
  Standard_EXPORT     Standard_Boolean OverWrite() const;
  
  Standard_EXPORT     void OverWrite(const Standard_Boolean O) ;
  
  Standard_EXPORT     Standard_Boolean Translate() const;
  
  Standard_EXPORT     void Translate(const Standard_Boolean T) ;





protected:





private:

  
  Standard_EXPORT     void TranslateOnPeriodic(TopoDS_Shape& F,TopoDS_Shape& E,Handle(Geom2d_Curve)& C) const;


BRep_Builder myBuilder;
TopOpeBRepTool_CurveTool myCurveTool;
Standard_Boolean myOverWrite;
Standard_Boolean myTranslate;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
