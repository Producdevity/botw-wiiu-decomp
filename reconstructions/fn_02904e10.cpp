#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dcec;
extern "C" RuntimeTag data_1048dcf0;
extern "C" const RuntimeVTable data_10160424;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10160414;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10160404;

typedef Token<&data_1048dcec, &data_1048dcf0, &data_10160424> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10160414> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10160404> Type2;

extern "C" bool fn_02904e10(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
