/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package rhcad.touchvg.core;

public final class MgPathNode {
  public final static MgPathNode kMgCloseFigure = new MgPathNode("kMgCloseFigure", 1);
  public final static MgPathNode kMgLineTo = new MgPathNode("kMgLineTo", 2);
  public final static MgPathNode kMgBezierTo = new MgPathNode("kMgBezierTo", 4);
  public final static MgPathNode kMgQuadTo = new MgPathNode("kMgQuadTo", 8);
  public final static MgPathNode kMgMoveTo = new MgPathNode("kMgMoveTo", 6);

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static MgPathNode swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + MgPathNode.class + " with value " + swigValue);
  }

  private MgPathNode(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private MgPathNode(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private MgPathNode(String swigName, MgPathNode swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static MgPathNode[] swigValues = { kMgCloseFigure, kMgLineTo, kMgBezierTo, kMgQuadTo, kMgMoveTo };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

