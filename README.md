# Thesis Activated Carbon Modelling

### 1 USEPA_PSDM (PSDM = comprehensive mass-transfer model "Pore Surface Diffusion Model")
- Is open-source code from USEPA: https://github.com/USEPA/Water_Treatment_Models.git
- The author did a small update in the code in December to be able to run it.
- 0Linked_files: 2 articles (EPA) that use USEPA PSDM model for PFAS removal on pilot & full scale + Excel with their data
- '3PSDM_EditMathieu': I did small edits in 'Simple_Example.ipynb' and 'PSDM_NotebookMathieu.ipynb', in order to replicate the effluent curve of the PFAS article (Fig.1.a). Changed inputs in 'Example_TCE_1.xlsx'. I added some prints in the 'PSDM_NotebookMathieu.ipynb' under the name '//Mathieu...'. Results under section 'Example 2 - Variable influent' in 'Simple_Example.ipynb'.
- 'ExtraOutputMathieu.xlsx': I printed out values after the differential equation solver to see what happens in the column in time and space.
- '5PSDM_EditMathieu': I did small edits in 'Simple_Example.ipynb' and 'PSDM_NotebookMathieu.ipynb', in order to predict the K and 1/n parameters of the PFAS article (Fig.1.a). Effluent data is read in 'Example_PFHpA_2.xlsx', sheet 'data_optimize' and results under section 'Advanced example' in 'Simple_Example.ipynb'.


- 'PSDM/Example_TCE.py': Is just the same as 'Simple_Example.ipynb'. Original example compound TCE (Trichloroethylene).
- PSDM/Example_isotherm.py: Is Python example with isotherm fitting (Freundlich and Langmuir), to get isotherm parameters from experimental equilibrium data and use these parameters in the PSDM.


### 2Other
- Isotherm_fitting: exercise for me to fit isotherm