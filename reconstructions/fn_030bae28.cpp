extern "C" void fn_030b97f8(void*, void*);
struct MutexOwner;
extern "C" void fn_030bb7f0(MutexOwner *);
struct MutexOwner;
extern "C" void fn_030bb7f8(MutexOwner *);

extern "C" struct MutexOwner data_1054a4b0;

extern "C" void fn_030bae28(void *arg0, void *arg1) {
    fn_030bb7f0(&data_1054a4b0);
    fn_030b97f8(arg0, arg1);
    fn_030bb7f8(&data_1054a4b0);
}
