-- INCLUDED FILE: CASE1_ONEYEAR_WI.INC
-- One year of Water Inj. plus Production

--*WATER*--
-- This option causes convergence issues in OPM Flow
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
    10*36.5
/ ---------------------------------------------------------------
