#ifndef EXAMPLEDOCUMENT_H
#define EXAMPLEDOCUMENT_H

#include "iexceldocument.h"

class ExampleDocument : public IExcelDocument
{
public:
    ExampleDocument();
    void save() override;
};

#endif // EXAMPLEDOCUMENT_H
