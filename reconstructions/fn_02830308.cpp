#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486fb0;
extern "C" RuntimeTag data_1048d4a0;
extern "C" const RuntimeVTable data_101409f8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101409e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101409d8;

typedef Token<&data_10486fb0, &data_1048d4a0, &data_101409f8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101409e8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101409d8> Type2;

extern "C" bool fn_02830308(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
