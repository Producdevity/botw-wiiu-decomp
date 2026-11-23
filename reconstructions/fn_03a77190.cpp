#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486378;
extern "C" RuntimeTag data_104973b0;
extern "C" const RuntimeVTable data_10362528;
extern "C" unsigned data_10485d5c;
extern "C" RuntimeTag data_10492388;
extern "C" const RuntimeVTable data_10362518;
extern "C" unsigned data_10485d58;
extern "C" RuntimeTag data_10492368;
extern "C" const RuntimeVTable data_103624e8;

typedef Token<&data_10486378, &data_104973b0, &data_10362528> Type0;
typedef Token<&data_10485d5c, &data_10492388, &data_10362518> Type1;
typedef Token<&data_10485d58, &data_10492368, &data_103624e8> Type2;

extern "C" bool fn_03a77190(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
