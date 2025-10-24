-- INCLUDED FILE: CASE1_ONEYEAR_WI.INC
-- One year of Gas Inj. plus Production

--*GAS*--
-- Sets simulator control parameters
TUNING
-- TSINIT Maximum length of next timestep
    2.0 /
/
/

WELOPEN
    'INJ-G'  'OPEN' /
    'INJ-W'  'SHUT' /
/

TSTEP
    20*18.25
/ ---------------------------------------------------------------
