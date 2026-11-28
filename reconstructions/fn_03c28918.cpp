struct OwnedList;
struct OwnedListNode;

extern "C" void fn_03c0e68c(OwnedList* list, OwnedListNode* node);

extern "C" void fn_03c28918(void* object, void* other) {
    fn_03c0e68c((OwnedList*)((char*)object + 12), (OwnedListNode*)((char*)other + 648));
}
