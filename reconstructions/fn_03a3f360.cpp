struct OwnedList;
struct OwnedListNode;

extern "C" void fn_03c0e68c(OwnedList* list, OwnedListNode* node);

extern "C" void fn_03a3f360(void* object, void* other) {
    fn_03c0e68c((OwnedList*)((char*)object + 68), (OwnedListNode*)((char*)other + 36));
}
