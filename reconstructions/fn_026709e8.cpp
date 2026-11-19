#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c314;
extern "C" RuntimeTag data_1048c318;
extern "C" const RuntimeVTable data_10105694;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10105684;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10105674;

typedef Token<&data_1048c314, &data_1048c318, &data_10105694> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10105684> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10105674> Type2;

extern "C" bool fn_026709e8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
