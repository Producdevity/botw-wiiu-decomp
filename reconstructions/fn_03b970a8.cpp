#include "botw/float_entry_table.h"

extern "C" const float data_103c66a8;

extern "C" float fn_03b970a8(const FloatEntryTable* table, unsigned int index) {
    if (index < table->count)
        return table->entries[index].value;
    return data_103c66a8;
}
