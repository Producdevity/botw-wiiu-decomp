typedef void (*Method)(void*, void*, int, int);

struct ReadyFlagged;

extern "C" int fn_03b9b7c0(void* source, void* value);
extern "C" ReadyFlagged* fn_03b9e7e0(void* source);

extern "C" void fn_03b88744(void* object, void* value, int flags) {
    Method method = *(Method*)((char*)*(void**)((char*)object + 0x60) + 0x54);
    method(object, value, fn_03b9b7c0(fn_03b9e7e0(*(void**)((char*)object + 0x18)), value), flags);
}
