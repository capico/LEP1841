-- INCLUDED FILE: CASE2_ONEYEAR.INC
-- Standard three month WAG cycle

-- FIRST 3 MONTHS -----------------------------------------------
--*WATER*--
-- -- Sets simulator control parameters
-- TUNING
-- -- TSINIT Maximum length of next timestep
--     2.0 /
-- /
-- /

WELOPEN
    'INJ-G'  'SHUT' /
    'INJ-W'  'OPEN' /
/

TSTEP
    1.25 3*30.0
/

-- SECOND 3 MONTHS ----------------------------------------------
--*GAS*--
-- TUNING
--     2.0 /
-- /
-- /


WELOPEN
    'INJ-W'  'SHUT' /
    'INJ-G'  'OPEN' /
/

TSTEP
    1.25 3*30.0
/

--THIRD 3 MONTHS ------------------------------------------------
--*WATER*--
-- TUNING
--     2.0 /
-- /
-- /

WELOPEN
    'INJ-G'     'SHUT' /
    'INJ-W'     'OPEN' /
/

TSTEP
    1.25 3*30.0
/

-- FOURTH 3 MONTHS ----------------------------------------------
--*GAS*--
-- TUNING
--     2.0 /
-- /
-- /

WELOPEN
    'INJ-W'  'SHUT' /
    'INJ-G'  'OPEN' /
/

TSTEP
    1.25 3*30.0
/ ---------------------------------------------------------------
