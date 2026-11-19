#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fc64;
extern "C" RuntimeTag data_104905c8;
extern "C" const RuntimeVTable data_101b8760;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b8750;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b8740;

typedef Token<&data_1048fc64, &data_104905c8, &data_101b8760> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101b8750> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101b8740> Type2;

extern "C" bool fn_02bc6210(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
