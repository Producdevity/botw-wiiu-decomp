#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c63c;
extern "C" RuntimeTag data_1048c640;
extern "C" const RuntimeVTable data_10111c14;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10111c04;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10111bf4;

typedef Token<&data_1048c63c, &data_1048c640, &data_10111c14> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10111c04> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10111bf4> Type2;

extern "C" bool fn_026c71c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
