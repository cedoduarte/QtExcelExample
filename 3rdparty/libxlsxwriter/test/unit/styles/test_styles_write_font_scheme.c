/*
 * Tests for the lib_xlsx_writer library.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 * Copyright 2014-2024, John McNamara, jmcnamara@cpan.org.
 *
 */

#include "../ctest.h"
#include "../helper.h"

#include "../../../include/xlsxwriter/styles.h"

// Test the _write_scheme() function.
CTEST(styles, write_scheme) {


    char* got;
    char exp[] = "<scheme val=\"minor\"/>";
    FILE* testfile = lxw_tmpfile(NULL);

    lxw_styles *styles = lxw_styles_new();
    styles->file = testfile;

    _write_font_scheme(styles, "minor");

    RUN_XLSX_STREQ(exp, got);

    lxw_styles_free(styles);
}
