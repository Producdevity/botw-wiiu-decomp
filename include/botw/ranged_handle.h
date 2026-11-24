#ifndef BOTW_RANGED_HANDLE_H
#define BOTW_RANGED_HANDLE_H

extern "C" void fn_0378da14(void* handle);

struct HandleRange {
    int begin;
    int end;
    int first;
    int last;
};

struct RangedHandle {
    unsigned char handle[12];
    HandleRange range;

    void release() {
        if (&range) {
            range.begin = -1;
            range.end = -1;
            range.first = 0;
            range.last = 0;
        }
        fn_0378da14(this);
    }
};

typedef char HandleRangeSize[sizeof(HandleRange) == 16 ? 1 : -1];
typedef char RangedHandleSize[sizeof(RangedHandle) == 28 ? 1 : -1];

#endif
