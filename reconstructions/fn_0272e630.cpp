#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ca3c;
extern "C" RuntimeTag data_1048ca38;
extern "C" const RuntimeVTable data_1011f3ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011f39c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011f38c;

typedef Token<&data_1048ca3c, &data_1048ca38, &data_1011f3ac> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011f39c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011f38c> Type2;

extern "C" bool fn_0272e630(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
