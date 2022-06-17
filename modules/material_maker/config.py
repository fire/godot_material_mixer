

def can_build(env, platform):
  return True


def configure(env):
	pass


def get_doc_classes():
    return [
        "MMAlgos",
        "MMNode",
        "CurveBase ",
        "GradientBase",
        "PolygonBase ",
        "MMNodeUniversalProperty",
        "MMMaterial",
        "MMGraphNode",
        "MatMakerGDEditor",

        "MMUniform",
        "MMGreyscaleUniform",

        "MMTranslate",
        "MMTransform",
        "MMTiler",
        "MMShear",
        "MMScale",
        "MMRotate",
        "MMRepeat",
        "MMMirror",
        "MMKaleidoscope",
        "MMColorTiler",
        "MMCircleMap",

        "MMShape",
        "MMImage",
        "MMCurve",

        "MMSdf3dRender",
        "MMSdf3dColor",

        "MMSdf3dTfTranslate",
        "MMSdf3dTfScale",
        "MMSdf3dTfRotate",

        "MMSdf3dShapeTorus",
        "MMSdf3dShapeSphere",
        "MMSdf3dShapeCylinder",
        "MMSdf3dShapeCone",
        "MMSdf3dShapeCapsule",
        "MMSdf3dShapeBox",

        "MMSdf3dOpSmoothBool",
        "MMSdf3dOpRounded",
        "MMSdf3dOpRevolution",
        "MMSdf3dOpRepeat",
        "MMSdf3dOpMorph",
        "MMSdf3dOpElongation",
        "MMSdf3dOpCircleRepeat",
        "MMSdf3dOpBool",
    ]

def get_doc_path():
    return "doc_classes"

