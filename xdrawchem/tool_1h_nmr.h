#ifndef TOOL_1HNMR_H
#define TOOL_1HNMR_H

#include <QTextEdit>

#include "molecule.h"
#include "tooldialog.h"
#include "ngw.h"

class Tool_1HNMR_Dialog : public ToolDialog
{
public:
    Tool_1HNMR_Dialog( QWidget *parent = 0 );
    void process();

private:
    NewGraphWidget *ngw;
    QTextEdit *peaktext;
};

#endif

// kate: tab-width 4; indent-width 4; space-indent on; replace-trailing-space-save on;
