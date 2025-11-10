# SPE Fifth Comparative Solution Project
The provided files correspond to the three original scenarios described in *Fifth Comparative Solution Project: Evaluation of Miscible Flood Simulators*, by J.E. Killough and C.A. Kossack (SPE-16000-MS, 1987). The study compares the performance of various simulators for miscible flooding using water-alternating-gas (WAG) injection in a light oil reservoir, employing both full compositional models and simplified four-component models.

The files contain the input data to simulate the three cases using the four-component black oil model combined with the Todd and Longstaff miscible displacement formulation. All cases were confirmed to run successfully in the OPM Flow simulator. The three cases are:

- Case 1 – Immiscible: Reservoir pressure remains below the minimum miscibility pressure (MMP).
- Case 2 – Miscible: Pressure is maintained above both the MMP and the bubble point throughout the reservoir.
- Case 3 – Partially Miscible: The reservoir contains regions with pressure both above and below the MMP.

Two additional cases were included:

- Case 2 CO2: A variation of Case 2 in which the injected solvent is replaced by carbon dioxide, while all other conditions remain unchanged.
- Case 2 CO2SOL: An extension of Case 2 CO2 that allows carbon dioxide to dissolve into the aqueous phase.

