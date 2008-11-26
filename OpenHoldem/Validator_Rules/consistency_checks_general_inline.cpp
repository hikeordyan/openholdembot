BEGIN_TESTCASE
    TESTCASE_ID ("1000")
    HEURISTIC_RULE (true)
    REASONING ("After 10 minutes there must have been played at least 4 hands at any table.")
    PRECONDITION (gws("elapsed") > 600)
    POSTCONDITION (gws("handnumber") >= 4)
    SYMBOLS_POSSIBLY_AFFECTED ("elapsed, handnumber")
END_TESTCASE



