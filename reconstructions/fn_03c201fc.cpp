typedef unsigned char u8;
typedef int s32;

struct OwnedList;
struct OwnedListNode;
extern "C" void fn_03c0e68c(OwnedList *, OwnedListNode *);

extern "C" void fn_03c201fc(struct OwnedList *arg0, void *arg1) {
    if ((s32) (*(u8 *)((char *)(arg1) + (0x201))) != 0) {
        fn_03c0e68c(arg0, (OwnedListNode *)((char *)arg1 + 0x204));
        (*(u8 *)((char *)(arg1) + (0x201))) = 0U;
    }
}
