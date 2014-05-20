/**
 * @page changes_after_1_0 Changes after Version 1.0
 *
 * <p> This is the list of changes made after the release of Aspect version
 * 1.0. All entries are signed with the names of the author. </p>
 *
 * <ol>
 * <li>New: There is now a mesh refinement criterium that checks the mesh
 * always has a minimum refinement level determined by a function given in the
 * input file.
 *
 * <li> New: Input files can now contain lines ending in backslashes
 * to concatenate subsequent lines.
 * <br>
 * (Menno Fraters, 2014/05/19)
 *
 * <li> New: There is a new material model called multicomponent for 
 * having an arbitrary number of compositional fields with different
 * material properties, where each compositional field represents a rock
 * type. Within each rock type the material properties are assumed to
 * be constant.  When more than one rock type is present, the material
 * model averages their properties with a weighted arithmetic average. 
 * An exception is viscosity, where the user may specify a harmonic,
 * geometric, or arithmetic averaging, or selecting the viscosity of
 * the maximum composition.
 * <br>
 * (Ian Rose, 2014/05/19)
 *
 * <li>New: The dynamic topography postprocessors now take into account
 * (i) the dynamic pressure, (ii) effects due to compressibility, (iii)
 * they now have the option to subtract the mean topography to ensure that
 * the topography is, on average, zero.
 * <br>
 * (Jacqueline Austermann, 2014/05/19)
 *
 * <li>New: There is a new plugin architecture for heating models that
 * allows for plugins defining the radiogenic heating rate in dependency
 * of temperature, pressure, composition, position and time. This introduces
 * an incompatibility of input files to older versions, but the old functionality
 * is preserved and extended.
 * <br>
 * (Rene Gassmoeller, 2014/05/16)
 *
 * <li>New: There is now a material model with reactions between compositional 
 * fields and a cookbook describing the usage of this material model. 
 * <br>
 * (Juliane Dannberg, Rene Gassmoeller, 2014/05/16)
 *
 * <li>Fixed: Times associated with visualization output are now correctly
 * modified when "Use years in output instead of seconds" is true.
 * <br>
 * (Eric Heien, 2014/05/09)
 *
 * </ol>
 *
 *
 */
