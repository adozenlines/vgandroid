/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package touchvg.core;

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
        touchvgJNI.delete_MgCoreView(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public static MgCoreView fromHandle(int h) {
    long cPtr = touchvgJNI.MgCoreView_fromHandle(h);
    return (cPtr == 0) ? null : new MgCoreView(cPtr, false);
  }

  public int toHandle() {
    return touchvgJNI.MgCoreView_toHandle(swigCPtr, this);
  }

  public MgView viewAdapter() {
    long cPtr = touchvgJNI.MgCoreView_viewAdapter(swigCPtr, this);
    return (cPtr == 0) ? null : new MgView(cPtr, false);
  }

  public int viewAdapterHandle() {
    return touchvgJNI.MgCoreView_viewAdapterHandle(swigCPtr, this);
  }

  public int backDoc() {
    return touchvgJNI.MgCoreView_backDoc(swigCPtr, this);
  }

  public int backShapes() {
    return touchvgJNI.MgCoreView_backShapes(swigCPtr, this);
  }

  public int acquireFrontDoc() {
    return touchvgJNI.MgCoreView_acquireFrontDoc(swigCPtr, this);
  }

  public void releaseDoc(int hDoc) {
    touchvgJNI.MgCoreView_releaseDoc(swigCPtr, this, hDoc);
  }

  public int acquireDynamicShapes() {
    return touchvgJNI.MgCoreView_acquireDynamicShapes(swigCPtr, this);
  }

  public void releaseShapes(int hShapes) {
    touchvgJNI.MgCoreView_releaseShapes(swigCPtr, this, hShapes);
  }

  public boolean loadDynamicShapes(MgStorage s) {
    return touchvgJNI.MgCoreView_loadDynamicShapes(swigCPtr, this, MgStorage.getCPtr(s), s);
  }

  public void applyDynamicShapes() {
    touchvgJNI.MgCoreView_applyDynamicShapes(swigCPtr, this);
  }

  public boolean isPressDragging() {
    return touchvgJNI.MgCoreView_isPressDragging(swigCPtr, this);
  }

  public String getCommand() {
    return touchvgJNI.MgCoreView_getCommand(swigCPtr, this);
  }

  public boolean setCommand(String name, String params) {
    return touchvgJNI.MgCoreView_setCommand__SWIG_0(swigCPtr, this, name, params);
  }

  public boolean setCommand(String name) {
    return touchvgJNI.MgCoreView_setCommand__SWIG_1(swigCPtr, this, name);
  }

  public boolean doContextAction(int action) {
    return touchvgJNI.MgCoreView_doContextAction(swigCPtr, this, action);
  }

  public void clearCachedData() {
    touchvgJNI.MgCoreView_clearCachedData(swigCPtr, this);
  }

  public int addShapesForTest() {
    return touchvgJNI.MgCoreView_addShapesForTest(swigCPtr, this);
  }

  public int getShapeCount() {
    return touchvgJNI.MgCoreView_getShapeCount(swigCPtr, this);
  }

  public int getChangeCount() {
    return touchvgJNI.MgCoreView_getChangeCount(swigCPtr, this);
  }

  public int getDrawCount() {
    return touchvgJNI.MgCoreView_getDrawCount(swigCPtr, this);
  }

  public int getSelectedShapeCount() {
    return touchvgJNI.MgCoreView_getSelectedShapeCount(swigCPtr, this);
  }

  public int getSelectedShapeType() {
    return touchvgJNI.MgCoreView_getSelectedShapeType(swigCPtr, this);
  }

  public int getSelectedShapeID() {
    return touchvgJNI.MgCoreView_getSelectedShapeID(swigCPtr, this);
  }

  public void clear() {
    touchvgJNI.MgCoreView_clear(swigCPtr, this);
  }

  public boolean loadFromFile(String vgfile, boolean readOnly) {
    return touchvgJNI.MgCoreView_loadFromFile__SWIG_0(swigCPtr, this, vgfile, readOnly);
  }

  public boolean loadFromFile(String vgfile) {
    return touchvgJNI.MgCoreView_loadFromFile__SWIG_1(swigCPtr, this, vgfile);
  }

  public boolean saveToFile(int hDoc, String vgfile, boolean pretty) {
    return touchvgJNI.MgCoreView_saveToFile__SWIG_0(swigCPtr, this, hDoc, vgfile, pretty);
  }

  public boolean saveToFile(int hDoc, String vgfile) {
    return touchvgJNI.MgCoreView_saveToFile__SWIG_1(swigCPtr, this, hDoc, vgfile);
  }

  public boolean saveToFile(String vgfile, boolean pretty) {
    return touchvgJNI.MgCoreView_saveToFile__SWIG_2(swigCPtr, this, vgfile, pretty);
  }

  public boolean saveToFile(String vgfile) {
    return touchvgJNI.MgCoreView_saveToFile__SWIG_3(swigCPtr, this, vgfile);
  }

  public boolean loadShapes(MgStorage s, boolean readOnly) {
    return touchvgJNI.MgCoreView_loadShapes__SWIG_0(swigCPtr, this, MgStorage.getCPtr(s), s, readOnly);
  }

  public boolean loadShapes(MgStorage s) {
    return touchvgJNI.MgCoreView_loadShapes__SWIG_1(swigCPtr, this, MgStorage.getCPtr(s), s);
  }

  public boolean saveShapes(int hDoc, MgStorage s) {
    return touchvgJNI.MgCoreView_saveShapes__SWIG_0(swigCPtr, this, hDoc, MgStorage.getCPtr(s), s);
  }

  public boolean saveShapes(MgStorage s) {
    return touchvgJNI.MgCoreView_saveShapes__SWIG_1(swigCPtr, this, MgStorage.getCPtr(s), s);
  }

  public String getContent(int hDoc) {
    return touchvgJNI.MgCoreView_getContent__SWIG_0(swigCPtr, this, hDoc);
  }

  public void freeContent() {
    touchvgJNI.MgCoreView_freeContent(swigCPtr, this);
  }

  public boolean setContent(String content) {
    return touchvgJNI.MgCoreView_setContent(swigCPtr, this, content);
  }

  public String getContent() {
    return touchvgJNI.MgCoreView_getContent__SWIG_1(swigCPtr, this);
  }

  public boolean zoomToExtent() {
    return touchvgJNI.MgCoreView_zoomToExtent(swigCPtr, this);
  }

  public boolean zoomToModel(float x, float y, float w, float h) {
    return touchvgJNI.MgCoreView_zoomToModel(swigCPtr, this, x, y, w, h);
  }

  public GiContext getContext(boolean forChange) {
    return new GiContext(touchvgJNI.MgCoreView_getContext(swigCPtr, this, forChange), false);
  }

  public void setContext(int mask) {
    touchvgJNI.MgCoreView_setContext__SWIG_0(swigCPtr, this, mask);
  }

  public void setContext(GiContext ctx, int mask, int apply) {
    touchvgJNI.MgCoreView_setContext__SWIG_1(swigCPtr, this, GiContext.getCPtr(ctx), ctx, mask, apply);
  }

  public void setContextEditing(boolean editing) {
    touchvgJNI.MgCoreView_setContextEditing(swigCPtr, this, editing);
  }

  public int addImageShape(String name, float width, float height) {
    return touchvgJNI.MgCoreView_addImageShape__SWIG_0(swigCPtr, this, name, width, height);
  }

  public int addImageShape(String name, float xc, float yc, float w, float h) {
    return touchvgJNI.MgCoreView_addImageShape__SWIG_1(swigCPtr, this, name, xc, yc, w, h);
  }

  public boolean getBoundingBox(Floats box) {
    return touchvgJNI.MgCoreView_getBoundingBox__SWIG_0(swigCPtr, this, Floats.getCPtr(box), box);
  }

  public boolean getBoundingBox(Floats box, int shapeId) {
    return touchvgJNI.MgCoreView_getBoundingBox__SWIG_1(swigCPtr, this, Floats.getCPtr(box), box, shapeId);
  }

}
