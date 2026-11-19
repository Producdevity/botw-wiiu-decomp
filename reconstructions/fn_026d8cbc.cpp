#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c730;
extern "C" RuntimeTag data_1048c734;
extern "C" const RuntimeVTable data_10114d68;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10114d58;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10114d48;

typedef Token<&data_1048c730, &data_1048c734, &data_10114d68> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10114d58> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10114d48> Type2;

extern "C" bool fn_026d8cbc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
