// The word/float union is inferred from the observed copy ordering.
union Word {
    unsigned value;
    float scalar;
};

struct Record {
    char padding[6776];
    Word kind;
    float values[16];
    char tail[60];
};

struct Records {
    char padding[8];
    unsigned count;
    const Record* records;

    const Record& at(unsigned index) const {
        if (index < count)
            return records[index];
        return records[0];
    }
};

struct Summary {
    Word kind;
    float values[10];
};

extern "C" void fn_038b125c(const Records* self, unsigned index, Summary* output) {
    const Record* record = &self->at(index);
    output->kind = record->kind;
    output->values[0] = record->values[0];
    output->values[1] = record->values[1];
    output->values[2] = record->values[2];
    output->values[3] = record->values[3];
    output->values[4] = record->values[10];
    output->values[5] = record->values[12];
    output->values[6] = record->values[13];
    output->values[7] = record->values[14];
    output->values[8] = record->values[15];
    output->values[9] = record->values[11];
}
