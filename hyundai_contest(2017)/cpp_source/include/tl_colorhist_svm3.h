#ifndef _BGM_TL_COLORHIST_SVM3_H_
#define _BGM_TL_COLORHIST_SVM3_H_

namespace bgm
{
float g_weights[] = {0.000000, -0.006965, -0.499950, -1.259727, -1.171319, -0.774848, -0.942206, -0.647079, -0.674768,
-0.460019, -0.527265, -0.457793, -0.434023, -0.389086, -0.445858, -0.436328, -0.311713, -0.432420,
-0.399287, -0.490574, -0.440914, -1.025109, -2.860150, -3.955126, -3.084703, -2.389512, -3.057992,
-2.328901, 0.336410, 2.449076, 2.098659, 1.492260, 0.356514, -2.631921, -0.232810, 2.513155,
1.583028, 2.023094, 1.992875, 2.513046, 2.523857, 3.573225, 3.051509, 1.321694, 0.521445,
0.518699, 0.864446, 0.761329, 0.670567, 0.841112, -0.010243, -0.072434, -0.142055, -0.120472,
-0.083041, -0.048732, -0.055881, -0.112102, -0.134486, -0.216992, -0.266912, -0.010278, 0.000000,
0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
0.000000, 0.000208, 0.001102, 0.001706, 0.039556, 0.107987, 0.352487, 0.475452, 0.688645,
0.731800, 0.883460, 1.077234, 1.310072, 1.318026, 1.728250, 2.031501, 1.714565, 2.207839,
1.872159, 2.780729, 1.853729, 2.936914, 2.383746, 3.280938, 2.798392, -0.086808, -0.595908,
-0.110550, -1.492321, -1.602237, -1.883714, 0.848341, 2.243987, -0.873571, 1.935700, -0.591806,
0.415092, 1.849709, 5.028777, 2.287314, 1.333042, -1.868646, -2.369363, -3.542938, -3.273314,
-3.635998, -2.560257, -2.707058, -2.451447, -1.738744, -2.095565, -1.377794, -1.631313, -1.086062,
-1.657931, -1.350626, -1.436092, -1.214925, -1.081666, -1.648302, -2.514797, -1.599796, -0.449947,
-0.015859, -0.009085, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
-2.952970, -4.088885, -5.322673, -0.065623, 0.379619, -0.479632, -1.469617, -2.409008, -2.474774,
-2.419496, -3.030036, -4.289427, -4.798151, -1.330410, -1.725108, -0.748097, -0.540579, 0.255774,
1.951865, 0.887982, 1.666898, 0.314312, 0.729780, 0.178684, 4.166933, -0.149191, 0.833132,
1.339360, -0.229934, 4.246048, -0.663679, 0.804563, 1.854707, 1.287939, 1.944549, 3.846061,
1.253627, -2.389703, -2.467444, -0.569868, 1.342368, 2.309839, 1.757157, 1.866379, 1.531785,
1.153499, 1.979513, 0.278304, 1.006805, 0.837379, 1.347262, -1.472745, -0.617537, 1.774431,
-0.100069, 0.387871, 0.190957, 0.437687, 0.162490, 0.014127, 0.046480, 0.027551, 0.174132,
0.068365, -0.108989, 0.162423, -0.235114, -0.355239, -0.941237, -1.106611, 0.627212, 0.090020};
float g_bias = -2.035998;

float y_weights[] = {0.000000, 0.024949, 0.833173, 2.305550, 2.729501, 2.241792, 2.945480, 2.114448, 2.129478,
1.462975, 1.529987, 1.450001, 1.191168, 1.202601, 1.307465, 1.231940, 0.908558, 1.190226,
1.162837, 1.350560, 0.938589, 0.500969, -0.341212, 0.030559, 0.610030, 0.741767, 0.691008,
0.356009, -1.788893, -3.483449, -2.266040, -1.149941, -1.704577, -0.883391, -2.374584, -2.174698,
-0.978558, -1.215726, -2.628621, -3.856725, -1.403902, -1.633065, -1.148484, -0.753241, -0.369667,
-0.486315, -0.777164, -0.719762, -0.658053, -0.835394, 0.040031, 0.106498, 0.175515, 0.166646,
0.100486, 0.056469, 0.082792, 0.161358, 0.129062, 0.242774, 0.292238, 0.013799, 0.000000,
0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
0.000000, 0.000000, 0.000000, 0.000000, -0.023327, -0.071217, -0.176551, -0.221264, -0.256871,
-0.293481, -0.343629, -0.321123, -0.412407, -0.443452, -0.572789, -0.647679, -0.522209, -0.770913,
-0.577093, -0.895309, -0.576064, -1.001456, -0.900961, -0.977950, -0.581127, 1.704348, 0.845872,
1.290917, 3.482828, 1.552741, 0.830496, -0.309485, -0.290155, -1.032715, -0.578293, -0.733293,
-1.766383, -0.791799, -0.843469, 1.868041, 1.953486, 3.140724, 3.802403, 4.410833, 2.917109,
1.847281, 0.796533, 0.046239, -0.499628, -0.838890, -1.165849, -1.074557, -1.241785, -0.820565,
-0.779540, -0.628266, -0.753392, -0.633216, -0.419147, -0.617735, -0.798987, -1.667117, -0.490903,
-0.008967, -0.001025, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
-3.955695, -5.368460, -5.021359, -3.006739, -0.670656, 0.597047, 2.376349, 3.494346, 3.753278,
4.239559, 6.501588, 8.398685, 6.916370, -0.619973, -0.582805, -1.251494, -0.506764, -0.896824,
-1.161760, 0.521733, 1.166195, 1.650126, 2.032404, 1.653418, -0.663115, 1.055175, 1.066377,
0.539593, -0.123924, -0.117788, 0.755295, 0.099254, -0.839655, -1.584534, -1.303757, -2.103888,
-0.939940, -0.095198, 0.723306, 2.070947, 0.560681, -0.732696, -1.305854, -1.598889, -0.902486,
-0.602354, -0.387921, 0.081421, 0.022831, -0.160550, -0.084688, 0.000545, 0.055120, -0.015559,
-0.032174, -0.013881, -0.133311, -0.231490, -0.290409, -0.363148, -0.534036, -0.743438, -1.086380,
-1.067737, -1.051403, -1.100916, -0.841209, -0.861224, -0.903885, -0.954640, -1.230471, -1.168717};
float y_bias = 1.117835;

float r_weights[] = {0.000000, -0.016303, -0.248857, -0.591106, -1.221810, -1.330908, -1.639016, -1.186571, -1.326348,
-0.960745, -1.038724, -1.030314, -0.841554, -0.826408, -0.932375, -0.911431, -0.681075, -0.827505,
-0.899110, -0.998111, -0.739077, 0.295188, 2.657541, 3.615197, 1.973687, 1.305289, 1.462664,
1.111081, 1.342019, 0.141419, 0.524667, -0.086530, 1.701255, 3.970022, 3.746254, 0.057658,
0.272554, 0.130338, 0.286772, 0.592665, -1.639932, -1.809279, -2.257638, -1.397314, -0.387010,
-0.191551, -0.120352, -0.043802, -0.049820, -0.033272, -0.037251, -0.037575, -0.058506, -0.055132,
-0.027271, -0.017390, -0.022967, -0.036558, -0.032028, -0.022796, -0.034194, -0.000096, 0.000000,
0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
0.000000, 0.000000, 0.000000, 0.000000, -0.010649, -0.038872, -0.205085, -0.250446, -0.528962,
-0.510771, -0.601902, -0.798790, -0.836247, -0.933526, -1.130516, -1.355466, -1.208381, -1.499634,
-1.345188, -1.928089, -1.302625, -1.972189, -1.666591, -2.605649, -2.930190, -2.250979, 0.975378,
-0.112187, -1.570000, 1.466358, 1.756815, -0.203926, -1.912365, 2.597081, -0.224995, 1.536734,
1.248878, -1.389989, -5.183226, -4.343111, -3.637483, -1.649855, -1.621161, -1.679061, -0.193284,
1.266023, 1.338019, 1.938420, 2.395687, 2.141800, 3.107205, 2.166776, 2.698202, 1.840101,
2.571845, 1.982567, 2.189551, 1.846605, 1.488325, 2.304756, 3.371994, 3.081238, 0.832226,
0.020024, 0.009450, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000,
5.463817, 8.556071, 9.541369, 1.773838, -0.498982, -1.003381, -1.660047, -1.442655, -1.716575,
-2.213080, -3.460223, -3.858222, -1.560995, 1.621128, 2.004785, 2.020632, 1.134827, 0.896557,
-0.045661, -0.799749, -2.137948, -1.864600, -2.794567, -1.396795, -3.513657, -0.855840, -1.913320,
-2.055078, 1.044661, -3.449878, 0.474266, -0.786228, -0.673807, 0.416116, -0.934246, -2.482349,
0.072587, 4.077639, 2.646444, -1.834438, -1.788366, -2.255373, -1.090184, -0.573922, -0.743273,
-0.367957, -1.683791, -0.604632, -0.828200, -0.499550, -1.412237, 1.926984, 0.709368, -1.571453,
0.206064, -0.175954, 0.110825, -0.073377, 0.089858, 0.112899, 0.290895, 0.428480, 0.415300,
0.517378, 0.657424, 0.443894, 1.148665, 1.241495, 1.904765, 2.324720, 1.064472, 1.822976};
float r_bias = -1.459368;


} // namespace bgm

#endif // !_BGM_TL_COLORHIST_SVM3_H_
