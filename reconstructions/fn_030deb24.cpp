struct OSEvent;
// coreinit OSSignalEvent import thunk.
extern "C" void fn_0434c940(OSEvent* event);

extern "C" void fn_030deb24(void* owner) {
    fn_0434c940(reinterpret_cast<OSEvent*>(static_cast<unsigned char*>(owner) + 16));
}
