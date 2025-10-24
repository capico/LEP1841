-- INCLUDED FILE: CASE3_ONEYEAR.INC
-- Standard three month WAG cycle

-- FIRST 3 MONTHS -----------------------------------------------
--*WATER*--
-- Sets simulator control parameters
TUNING
-- TSINIT Maximum length of next timestep
    2.0 /
/
/

WELOPEN
    'INJ-G'  'SHUT' /
    'INJ-W'  'OPEN' /
/

TSTEP
    5*18.25
/

-- SECOND 3 MONTHS ----------------------------------------------
--*GAS*--
TUNING
    2.0 /
/
/


WELOPEN
    'INJ-W'  'SHUT' /
    'INJ-G'  'OPEN' /
/

TSTEP
    5*18.25
/

--THIRD 3 MONTHS ------------------------------------------------
--*WATER*--
TUNING
    2.0 /
/
/

WELOPEN
    'INJ-G'     'SHUT' /
    'INJ-W'     'OPEN' /
/

TSTEP
    5*18.25
/

-- FOURTH 3 MONTHS ----------------------------------------------
--*GAS*--
TUNING
    2.0 /
/
/

WELOPEN
    'INJ-W'  'SHUT' /
    'INJ-G'  'OPEN' /
/

TSTEP
    5*18.25
/ ---------------------------------------------------------------
