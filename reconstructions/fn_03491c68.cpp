#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e54;
extern "C" RuntimeTag data_104893bc;
extern "C" const RuntimeVTable data_102ca018;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102ca008;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102c9ff8;

typedef Token<&data_10486e54, &data_104893bc, &data_102ca018> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102ca008> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102c9ff8> Type2;

extern "C" bool fn_03491c68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
