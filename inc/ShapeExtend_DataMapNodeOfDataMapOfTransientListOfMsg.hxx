// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg_HeaderFile
#define _ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg_HeaderFile
#include <Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Message_ListOfMsg_HeaderFile
#include <Message_ListOfMsg.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Standard_Transient;
class Message_ListOfMsg;
class TColStd_MapTransientHasher;
class ShapeExtend_DataMapOfTransientListOfMsg;
class ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg;



class ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg : public TCollection_MapNode {

public:

  
      ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg(const Handle(Standard_Transient)& K,const Message_ListOfMsg& I,const TCollection_MapNodePtr& n);
  
        Handle_Standard_Transient& Key() const;
  
        Message_ListOfMsg& Value() const;




  DEFINE_STANDARD_RTTI(ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg)

protected:




private: 


Handle_Standard_Transient myKey;
Message_ListOfMsg myValue;


};

#define TheKey Handle_Standard_Transient
#define TheKey_hxx <Standard_Transient.hxx>
#define TheItem Message_ListOfMsg
#define TheItem_hxx <Message_ListOfMsg.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg
#define TCollection_DataMapNode_hxx <ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg.hxx>
#define TCollection_DataMapIterator ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg
#define TCollection_DataMapIterator_hxx <ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx>
#define Handle_TCollection_DataMapNode Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg
#define TCollection_DataMapNode_Type_() ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg_Type_()
#define TCollection_DataMap ShapeExtend_DataMapOfTransientListOfMsg
#define TCollection_DataMap_hxx <ShapeExtend_DataMapOfTransientListOfMsg.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
