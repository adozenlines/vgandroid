/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package democmds.core;

public class MgCoreView {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MgCoreView(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MgCoreView obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        democmdsJNI.delete_MgCoreView(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static MgCoreView fromHandle(int h) {
    long cPtr = democmdsJNI.MgCoreView_fromHandle(h);
    return (cPtr == 0) ? null : new MgCoreView(cPtr, false);
  }

  public int toHandle() {
    return democmdsJNI.MgCoreView_toHandle(swigCPtr, this);
  }

  public SWIGTYPE_p_MgView viewAdapter() {
    long cPtr = democmdsJNI.MgCoreView_viewAdapter(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_MgView(cPtr, false);
  }

  public int viewAdapterHandle() {
    return democmdsJNI.MgCoreView_viewAdapterHandle(swigCPtr, this);
  }

  public int backDoc() {
    return democmdsJNI.MgCoreView_backDoc(swigCPtr, this);
  }

  public int backShapes() {
    return democmdsJNI.MgCoreView_backShapes(swigCPtr, this);
  }

  public int acquireFrontDoc() {
    return democmdsJNI.MgCoreView_acquireFrontDoc(swigCPtr, this);
  }

  public void releaseDoc(int hDoc) {
    democmdsJNI.MgCoreView_releaseDoc(swigCPtr, this, hDoc);
  }

  public int acquireDynamicShapes() {
    return democmdsJNI.MgCoreView_acquireDynamicShapes(swigCPtr, this);
  }

  public void releaseShapes(int hShapes) {
    democmdsJNI.MgCoreView_releaseShapes(swigCPtr, this, hShapes);
  }

  public boolean loadDynamicShapes(SWIGTYPE_p_MgStorage s) {
    return democmdsJNI.MgCoreView_loadDynamicShapes(swigCPtr, this, SWIGTYPE_p_MgStorage.getCPtr(s));
  }

  public void applyDynamicShapes() {
    democmdsJNI.MgCoreView_applyDynamicShapes(swigCPtr, this);
  }

  public boolean isPressDragging() {
    return democmdsJNI.MgCoreView_isPressDragging(swigCPtr, this);
  }

  public String getCommand() {
    return democmdsJNI.MgCoreView_getCommand(swigCPtr, this);
  }

  public boolean setCommand(String name, String params) {
    return democmdsJNI.MgCoreView_setCommand__SWIG_0(swigCPtr, this, name, params);
  }

  public boolean setCommand(String name) {
    return democmdsJNI.MgCoreView_setCommand__SWIG_1(swigCPtr, this, name);
  }

  public boolean doContextAction(int action) {
    return democmdsJNI.MgCoreView_doContextAction(swigCPtr, this, action);
  }

  public void clearCachedData() {
    democmdsJNI.MgCoreView_clearCachedData(swigCPtr, this);
  }

  public int addShapesForTest() {
    return democmdsJNI.MgCoreView_addShapesForTest(swigCPtr, this);
  }

  public int getShapeCount() {
    return democmdsJNI.MgCoreView_getShapeCount(swigCPtr, this);
  }

  public int getChangeCount() {
    return democmdsJNI.MgCoreView_getChangeCount(swigCPtr, this);
  }

  public int getDrawCount() {
    return democmdsJNI.MgCoreView_getDrawCount(swigCPtr, this);
  }

  public int getSelectedShapeCount() {
    return democmdsJNI.MgCoreView_getSelectedShapeCount(swigCPtr, this);
  }

  public int getSelectedShapeType() {
    return democmdsJNI.MgCoreView_getSelectedShapeType(swigCPtr, this);
  }

  public int getSelectedShapeID() {
    return democmdsJNI.MgCoreView_getSelectedShapeID(swigCPtr, this);
  }

  public void clear() {
    democmdsJNI.MgCoreView_clear(swigCPtr, this);
  }

  public boolean loadFromFile(String vgfile, boolean readOnly) {
    return democmdsJNI.MgCoreView_loadFromFile__SWIG_0(swigCPtr, this, vgfile, readOnly);
  }

  public boolean loadFromFile(String vgfile) {
    return democmdsJNI.MgCoreView_loadFromFile__SWIG_1(swigCPtr, this, vgfile);
  }

  public boolean saveToFile(int hDoc, String vgfile, boolean pretty) {
    return democmdsJNI.MgCoreView_saveToFile__SWIG_0(swigCPtr, this, hDoc, vgfile, pretty);
  }

  public boolean saveToFile(int hDoc, String vgfile) {
    return democmdsJNI.MgCoreView_saveToFile__SWIG_1(swigCPtr, this, hDoc, vgfile);
  }

  public boolean saveToFile(String vgfile, boolean pretty) {
    return democmdsJNI.MgCoreView_saveToFile__SWIG_2(swigCPtr, this, vgfile, pretty);
  }

  public boolean saveToFile(String vgfile) {
    return democmdsJNI.MgCoreView_saveToFile__SWIG_3(swigCPtr, this, vgfile);
  }

  public boolean loadShapes(SWIGTYPE_p_MgStorage s, boolean readOnly) {
    return democmdsJNI.MgCoreView_loadShapes__SWIG_0(swigCPtr, this, SWIGTYPE_p_MgStorage.getCPtr(s), readOnly);
  }

  public boolean loadShapes(SWIGTYPE_p_MgStorage s) {
    return democmdsJNI.MgCoreView_loadShapes__SWIG_1(swigCPtr, this, SWIGTYPE_p_MgStorage.getCPtr(s));
  }

  public boolean saveShapes(int hDoc, SWIGTYPE_p_MgStorage s) {
    return democmdsJNI.MgCoreView_saveShapes__SWIG_0(swigCPtr, this, hDoc, SWIGTYPE_p_MgStorage.getCPtr(s));
  }

  public boolean saveShapes(SWIGTYPE_p_MgStorage s) {
    return democmdsJNI.MgCoreView_saveShapes__SWIG_1(swigCPtr, this, SWIGTYPE_p_MgStorage.getCPtr(s));
  }

  public String getContent(int hDoc) {
    return democmdsJNI.MgCoreView_getContent__SWIG_0(swigCPtr, this, hDoc);
  }

  public void freeContent() {
    democmdsJNI.MgCoreView_freeContent(swigCPtr, this);
  }

  public boolean setContent(String content) {
    return democmdsJNI.MgCoreView_setContent(swigCPtr, this, content);
  }

  public String getContent() {
    return democmdsJNI.MgCoreView_getContent__SWIG_1(swigCPtr, this);
  }

  public boolean zoomToExtent() {
    return democmdsJNI.MgCoreView_zoomToExtent(swigCPtr, this);
  }

  public boolean zoomToModel(float x, float y, float w, float h) {
    return democmdsJNI.MgCoreView_zoomToModel(swigCPtr, this, x, y, w, h);
  }

  public SWIGTYPE_p_GiContext getContext(boolean forChange) {
    return new SWIGTYPE_p_GiContext(democmdsJNI.MgCoreView_getContext(swigCPtr, this, forChange), false);
  }

  public void setContext(int mask) {
    democmdsJNI.MgCoreView_setContext__SWIG_0(swigCPtr, this, mask);
  }

  public void setContext(SWIGTYPE_p_GiContext ctx, int mask, int apply) {
    democmdsJNI.MgCoreView_setContext__SWIG_1(swigCPtr, this, SWIGTYPE_p_GiContext.getCPtr(ctx), mask, apply);
  }

  public void setContextEditing(boolean editing) {
    democmdsJNI.MgCoreView_setContextEditing(swigCPtr, this, editing);
  }

  public int addImageShape(String name, float width, float height) {
    return democmdsJNI.MgCoreView_addImageShape__SWIG_0(swigCPtr, this, name, width, height);
  }

  public int addImageShape(String name, float xc, float yc, float w, float h) {
    return democmdsJNI.MgCoreView_addImageShape__SWIG_1(swigCPtr, this, name, xc, yc, w, h);
  }

  public boolean getBoundingBox(Floats box) {
    return democmdsJNI.MgCoreView_getBoundingBox__SWIG_0(swigCPtr, this, Floats.getCPtr(box), box);
  }

  public boolean getBoundingBox(Floats box, int shapeId) {
    return democmdsJNI.MgCoreView_getBoundingBox__SWIG_1(swigCPtr, this, Floats.getCPtr(box), box, shapeId);
  }

}
