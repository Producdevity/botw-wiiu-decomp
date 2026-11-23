#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10491290;
extern "C" RuntimeTag data_10493250;
extern "C" const RuntimeVTable data_102b2f64;
extern "C" unsigned data_104868a8;
extern "C" RuntimeTag data_1049029c;
extern "C" const RuntimeVTable data_102b2f54;
extern "C" unsigned data_104868a4;
extern "C" RuntimeTag data_10486b30;
extern "C" const RuntimeVTable data_102b2f34;

typedef Token<&data_10491290, &data_10493250, &data_102b2f64> Type0;
typedef Token<&data_104868a8, &data_1049029c, &data_102b2f54> Type1;
typedef Token<&data_104868a4, &data_10486b30, &data_102b2f34> Type2;

extern "C" bool fn_0333afe0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
