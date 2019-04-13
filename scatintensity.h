extern double calc_intensity (int qp_rcount, int i, int N, int rcount, int lcount, int jj, double *flu_array, int total_sc, int ts, double T0, double tau,
double integrated_signal, double (*f0)[lcount], int *atyp, double *fpp, int  fpp_check, double qvect1, double qvect2,
double qvect3, double (*cq)[3], double (*CELL)[3], double  scellx, double scelly,double scellz, int *Z_atoms ,int r_ele_variable, int *q_ele,
double (*r_ele)[3], double complex *f_0, double complex *dummy_array_1, double complex *dummy_array_2, double complex *dummy_array_3,
double complex *dummy_array_4,double complex *dummy_array_5,double complex *dummy_array_6,double complex *dummy_array_7,double complex *qrterm_comp, 
int *comp_num, int num_threads, int chk_xxx, double complex (*intensity_account)[qp_rcount],double complex (*qrterm_account)[qp_rcount] ,int copy_var_count , int tpshapef, int tpshapeg ,
double st_snp, double FinalSnap, double sp_diff,
			      

			      double (*Hydrogen_form_factor_account)[qp_rcount],
			      double (*Helium_form_factor_account)[qp_rcount],
			      double (*Lithium_form_factor_account)[qp_rcount],
			      double (*Beryllium_form_factor_account)[qp_rcount],
			      double (*Boron_form_factor_account)[qp_rcount],
			      double (*Carbon_form_factor_account)[qp_rcount],
			      double (*Nitrogen_form_factor_account)[qp_rcount],
			      double (*Oxygen_form_factor_account)[qp_rcount],
			      double (*Fluorine_form_factor_account)[qp_rcount],
			      double (*Neon_form_factor_account)[qp_rcount],
			      double (*Sodium_form_factor_account)[qp_rcount],
			      double (*Magnesium_form_factor_account)[qp_rcount],
			      double (*Aluminum_form_factor_account)[qp_rcount],
			      double (*Silicon_form_factor_account)[qp_rcount],
			      double (*Phosphorus_form_factor_account)[qp_rcount],
			      double (*Sulfur_form_factor_account)[qp_rcount],
			      double (*Chlorine_form_factor_account)[qp_rcount],
			      double (*Argon_form_factor_account)[qp_rcount],
			      double (*Potassium_form_factor_account)[qp_rcount],
			      double (*Calcium_form_factor_account)[qp_rcount],
			      double (*Scandium_form_factor_account)[qp_rcount],
			      double (*Titanium_form_factor_account)[qp_rcount],
			      double (*Vanadium_form_factor_account)[qp_rcount],
			      double (*Chromium_form_factor_account)[qp_rcount],
			      double (*Manganese_form_factor_account)[qp_rcount],
			      double (*Iron_form_factor_account)[qp_rcount],
			      double (*Cobalt_form_factor_account)[qp_rcount],
			      double (*Nickel_form_factor_account)[qp_rcount],
			      double (*Copper_form_factor_account)[qp_rcount],
			      double (*Zinc_form_factor_account)[qp_rcount],
			      double (*Gallium_form_factor_account)[qp_rcount],
			      double (*Germanium_form_factor_account)[qp_rcount],
			      double (*Arsenic_form_factor_account)[qp_rcount],
			      double (*Selenium_form_factor_account)[qp_rcount],
			      double (*Bromine_form_factor_account)[qp_rcount],
			      double (*Krypton_form_factor_account)[qp_rcount],
			      double (*Rubidium_form_factor_account)[qp_rcount],
			      double (*Strontium_form_factor_account)[qp_rcount],
			      double (*Yttrium_form_factor_account)[qp_rcount],
			      double (*Zirconium_form_factor_account)[qp_rcount],
			      double (*Niobium_form_factor_account)[qp_rcount],
			      double (*Molybdenum_form_factor_account)[qp_rcount],
			      double (*Technetium_form_factor_account)[qp_rcount],
			      double (*Ruthenium_form_factor_account)[qp_rcount],
			      double (*Rhodium_form_factor_account)[qp_rcount],
			      double (*Palladium_form_factor_account)[qp_rcount],
			      double (*Silver_form_factor_account)[qp_rcount],
			      double (*Cadmium_form_factor_account)[qp_rcount],
			      double (*Indium_form_factor_account)[qp_rcount],
			      double (*Tin_form_factor_account)[qp_rcount],
			      double (*Antimony_form_factor_account)[qp_rcount],
			      double (*Tellurium_form_factor_account)[qp_rcount],
			      double (*Iodine_form_factor_account)[qp_rcount],
			      double (*Xenon_form_factor_account)[qp_rcount],
			      double (*Cesium_form_factor_account)[qp_rcount],
			      double (*Barium_form_factor_account)[qp_rcount],
			      double (*Lanthanum_form_factor_account)[qp_rcount],
			      double (*Cerium_form_factor_account)[qp_rcount],
			      double (*Praseodymium_form_factor_account)[qp_rcount],
			      double (*Neodymium_form_factor_account)[qp_rcount],
			      double (*Promethium_form_factor_account)[qp_rcount],
			      double (*Samarium_form_factor_account)[qp_rcount],
			      double (*Europium_form_factor_account)[qp_rcount],
			      double (*Gadolinium_form_factor_account)[qp_rcount],
			      double (*Terbium_form_factor_account)[qp_rcount],
			      double (*Dysprosium_form_factor_account)[qp_rcount],
			      double (*Holmium_form_factor_account)[qp_rcount],
			      double (*Erbium_form_factor_account)[qp_rcount],
			      double (*Thulium_form_factor_account)[qp_rcount],
			      double (*Ytterbium_form_factor_account)[qp_rcount],
			      double (*Lutetium_form_factor_account)[qp_rcount],
			      double (*Hafnium_form_factor_account)[qp_rcount],
			      double (*Tantalum_form_factor_account)[qp_rcount],
			      double (*Tungsten_form_factor_account)[qp_rcount],
			      double (*Rhenium_form_factor_account)[qp_rcount],
			      double (*Osmium_form_factor_account)[qp_rcount],
			      double (*Iridium_form_factor_account)[qp_rcount],
			      double (*Platinum_form_factor_account)[qp_rcount],
			      double (*Gold_form_factor_account)[qp_rcount],
			      double (*Mercury_form_factor_account)[qp_rcount],
			      double (*Thallium_form_factor_account)[qp_rcount],
			      double (*Lead_form_factor_account)[qp_rcount],
			      double (*Bismuth_form_factor_account)[qp_rcount],
			      double (*Polonium_form_factor_account)[qp_rcount],
			      double (*Astatine_form_factor_account)[qp_rcount],
			      double (*Radon_form_factor_account)[qp_rcount],
			      double (*Francium_form_factor_account)[qp_rcount],
			      double (*Radium_form_factor_account)[qp_rcount],
			      double (*Actinium_form_factor_account)[qp_rcount],
			      double (*Thorium_form_factor_account)[qp_rcount],
			      double (*Protactinium_form_factor_account)[qp_rcount],
			      double (*Uranium_form_factor_account)[qp_rcount],
			      double (*Neptunium_form_factor_account)[qp_rcount],
			      double (*Plutonium_form_factor_account)[qp_rcount],
			      double (*Americium_form_factor_account)[qp_rcount],
			      double (*Curium_form_factor_account)[qp_rcount],
			      double (*Berkelium_form_factor_account)[qp_rcount],
			      double (*Californium_form_factor_account)[qp_rcount],
			      double (*Einsteinium_form_factor_account)[qp_rcount],
			      double (*Fermium_form_factor_account)[qp_rcount],
			      double (*Mendelevium_form_factor_account)[qp_rcount],
			      double (*Nobelium_form_factor_account)[qp_rcount],
			      double (*Lawrencium_form_factor_account)[qp_rcount],
			      double (*Rutherfordium_form_factor_account)[qp_rcount],
			      double (*Dubnium_form_factor_account)[qp_rcount],
			      double (*Seaborgium_form_factor_account)[qp_rcount],
			      double (*Bohrium_form_factor_account)[qp_rcount],
			      double (*Hassium_form_factor_account)[qp_rcount],
			      double (*Meitnerium_form_factor_account)[qp_rcount],
			      
			      
			      double *Hydrogen_form_factor,
			      double *Helium_form_factor,
			      double *Lithium_form_factor,
			      double *Beryllium_form_factor,
			      double *Boron_form_factor,
			      double *Carbon_form_factor,
			      double *Nitrogen_form_factor,
			      double *Oxygen_form_factor,
			      double *Fluorine_form_factor,
			      double *Neon_form_factor,
			      double *Sodium_form_factor,
			      double *Magnesium_form_factor,
			      double *Aluminum_form_factor,
			      double *Silicon_form_factor,
			      double *Phosphorus_form_factor,
			      double *Sulfur_form_factor,
			      double *Chlorine_form_factor,
			      double *Argon_form_factor,
			      double *Potassium_form_factor,
			      double *Calcium_form_factor,
			      double *Scandium_form_factor,
			      double *Titanium_form_factor,
			      double *Vanadium_form_factor,
			      double *Chromium_form_factor,
			      double *Manganese_form_factor,
			      double *Iron_form_factor,
			      double *Cobalt_form_factor,
			      double *Nickel_form_factor,
			      double *Copper_form_factor,
			      double *Zinc_form_factor,
			      double *Gallium_form_factor,
			      double *Germanium_form_factor,
			      double *Arsenic_form_factor,
			      double *Selenium_form_factor,
			      double *Bromine_form_factor,
			      double *Krypton_form_factor,
			      double *Rubidium_form_factor,
			      double *Strontium_form_factor,
			      double *Yttrium_form_factor,
			      double *Zirconium_form_factor,
			      double *Niobium_form_factor,
			      double *Molybdenum_form_factor,
			      double *Technetium_form_factor,
			      double *Ruthenium_form_factor,
			      double *Rhodium_form_factor,
			      double *Palladium_form_factor,
			      double *Silver_form_factor,
			      double *Cadmium_form_factor,
			      double *Indium_form_factor,
			      double *Tin_form_factor,
			      double *Antimony_form_factor,
			      double *Tellurium_form_factor,
			      double *Iodine_form_factor,
			      double *Xenon_form_factor,
			      double *Cesium_form_factor,
			      double *Barium_form_factor,
			      double *Lanthanum_form_factor,
			      double *Cerium_form_factor,
			      double *Praseodymium_form_factor,
			      double *Neodymium_form_factor,
			      double *Promethium_form_factor,
			      double *Samarium_form_factor,
			      double *Europium_form_factor,
			      double *Gadolinium_form_factor,
			      double *Terbium_form_factor,
			      double *Dysprosium_form_factor,
			      double *Holmium_form_factor,
			      double *Erbium_form_factor,
			      double *Thulium_form_factor,
			      double *Ytterbium_form_factor,
			      double *Lutetium_form_factor,
			      double *Hafnium_form_factor,
			      double *Tantalum_form_factor,
			      double *Tungsten_form_factor,
			      double *Rhenium_form_factor,
			      double *Osmium_form_factor,
			      double *Iridium_form_factor,
			      double *Platinum_form_factor,
			      double *Gold_form_factor,
			      double *Mercury_form_factor,
			      double *Thallium_form_factor,
			      double *Lead_form_factor,
			      double *Bismuth_form_factor,
			      double *Polonium_form_factor,
			      double *Astatine_form_factor,
			      double *Radon_form_factor,
			      double *Francium_form_factor,
			      double *Radium_form_factor,
			      double *Actinium_form_factor,
			      double *Thorium_form_factor,
			      double *Protactinium_form_factor,
			      double *Uranium_form_factor,
			      double *Neptunium_form_factor,
			      double *Plutonium_form_factor,
			      double *Americium_form_factor,
			      double *Curium_form_factor,
			      double *Berkelium_form_factor,
			      double *Californium_form_factor,
			      double *Einsteinium_form_factor,
			      double *Fermium_form_factor,
			      double *Mendelevium_form_factor,
			      double *Nobelium_form_factor,
			      double *Lawrencium_form_factor,
			      double *Rutherfordium_form_factor,
			      double *Dubnium_form_factor,
			      double *Seaborgium_form_factor,
			      double *Bohrium_form_factor,
			      double *Hassium_form_factor,
			      double *Meitnerium_form_factor) ;
