#ifndef BOTW_MEMBER_CALLBACK_H
#define BOTW_MEMBER_CALLBACK_H

struct MemberCallback {
    short delta;
    short index;
    void* function;
};
typedef char MemberCallbackSize[sizeof(MemberCallback) == 8 ? 1 : -1];

extern "C" bool fn_0370f324(void* dispatcher, int event, int a, int b, int c,
                            MemberCallback callback, int mode);

#endif
