typedef int s32;

extern "C" void fn_0357f68c(void*);
struct DependentNode;
extern "C" void fn_03b9f39c(DependentNode *);
extern "C" void fn_03b9f3f4(void*);

extern "C" void fn_0357f758(void *arg0) {
    struct DependentNode *temp_r31;

    fn_0357f68c(arg0);
    if ((s32) (*(s32 *)((char *)(arg0) + (0xC))) > 0) {
        temp_r31 = (*(struct DependentNode **)((char *)(arg0) + (0)));
        if (temp_r31 != 0) {
            fn_03b9f39c(temp_r31);
            fn_03b9f3f4(temp_r31);
        }
    }
}
