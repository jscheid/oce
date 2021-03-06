// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_SequenceOfElement_HeaderFile
#define _MoniTool_SequenceOfElement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_MoniTool_Element_HeaderFile
#include <Handle_MoniTool_Element.hxx>
#endif
#ifndef _Handle_MoniTool_SequenceNodeOfSequenceOfElement_HeaderFile
#include <Handle_MoniTool_SequenceNodeOfSequenceOfElement.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MoniTool_Element;
class MoniTool_SequenceNodeOfSequenceOfElement;



class MoniTool_SequenceOfElement  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      MoniTool_SequenceOfElement();
  
  Standard_EXPORT     void Clear() ;
~MoniTool_SequenceOfElement()
{
  Clear();
}
  
  Standard_EXPORT    const MoniTool_SequenceOfElement& Assign(const MoniTool_SequenceOfElement& Other) ;
   const MoniTool_SequenceOfElement& operator =(const MoniTool_SequenceOfElement& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(MoniTool_Element)& T) ;
  
        void Append(MoniTool_SequenceOfElement& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(MoniTool_Element)& T) ;
  
        void Prepend(MoniTool_SequenceOfElement& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(MoniTool_Element)& T) ;
  
        void InsertBefore(const Standard_Integer Index,MoniTool_SequenceOfElement& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(MoniTool_Element)& T) ;
  
        void InsertAfter(const Standard_Integer Index,MoniTool_SequenceOfElement& S) ;
  
  Standard_EXPORT    const Handle_MoniTool_Element& First() const;
  
  Standard_EXPORT    const Handle_MoniTool_Element& Last() const;
  
        void Split(const Standard_Integer Index,MoniTool_SequenceOfElement& Sub) ;
  
  Standard_EXPORT    const Handle_MoniTool_Element& Value(const Standard_Integer Index) const;
   const Handle_MoniTool_Element& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(MoniTool_Element)& I) ;
  
  Standard_EXPORT     Handle_MoniTool_Element& ChangeValue(const Standard_Integer Index) ;
    Handle_MoniTool_Element& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MoniTool_SequenceOfElement(const MoniTool_SequenceOfElement& Other);




};

#define SeqItem Handle_MoniTool_Element
#define SeqItem_hxx <MoniTool_Element.hxx>
#define TCollection_SequenceNode MoniTool_SequenceNodeOfSequenceOfElement
#define TCollection_SequenceNode_hxx <MoniTool_SequenceNodeOfSequenceOfElement.hxx>
#define Handle_TCollection_SequenceNode Handle_MoniTool_SequenceNodeOfSequenceOfElement
#define TCollection_SequenceNode_Type_() MoniTool_SequenceNodeOfSequenceOfElement_Type_()
#define TCollection_Sequence MoniTool_SequenceOfElement
#define TCollection_Sequence_hxx <MoniTool_SequenceOfElement.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
