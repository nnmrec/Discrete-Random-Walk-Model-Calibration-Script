MATLAB Script for DRW Model Calibration 
====================

This repository includes the MATLAB script for calibration of the DRW model, implemented in ANSYS FLUENT. This calibrtation is through modeled particle disperssion against G.I. Taylor dispersion theory to find the appropriate lagrangian time scale constat (C_T). This general script can be modified for similar models to DRW implemented in other RANS-solver packages (i.e. OPEN FOAM, STAR CCM and etc.)

This script was developed as a part of the Ph.D. dissertation of [Teymour Javaherchi] at [UW-NNMREC] under supervision of professor [Alberto Aliseda].

Steps to run the script
=========

Follow the steps below to run the script:
  - Download all the files into one folder:
  
  ```
  git clone https://github.com/teymourj/Discrete-Random-Walk-Model-Calibration-Script.git
  ```
  - Dowanload the particle data input files:
  
  ```
  coming soon!
  ```
  - Open the source script in MATLAB.
  - ! To run the script with set of new generated inputs, the name of input files need to be matched within the body of the MATLAB script.

  
Publications
===========
A journal paper on this calibration methodology is under revision:

```
@ARTICLE{Javaherchi_PT2014
  author = {T. Javaherchi, A. Aliseda},
  title = {Calibration of the Discrete Random Walk (DRW) Model for turbulent diffusion of particles via G.I. Taylor's Dispersion Theory.},
  journal = {Under revision with Powder Technology},
  year = {2014},
  volume = {-},
  pages = {-},
}
```

ANSYS FLUENT .cas &amp; .dat files
============
The link to download ANSYS FLUENT .cas &amp; .dat of RANS simulations will be available soon.

License
======
This work is licensed under the MIT license

[Teymour Javaherchi]:http://staff.washington.edu/teymourj/
[UW-NNMREC]:http://depts.washington.edu/nnmrec/
[Alberto Aliseda]:https://www.me.washington.edu/research/faculty/aaliseda/index.html
