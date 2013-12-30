/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace touchvg.core {

using System;
using System.Runtime.InteropServices;

public class MgBaseShape : MgObject {
  private HandleRef swigCPtr;

  internal MgBaseShape(IntPtr cPtr, bool cMemoryOwn) : base(touchvgPINVOKE.MgBaseShape_SWIGUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MgBaseShape obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MgBaseShape() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          touchvgPINVOKE.delete_MgBaseShape(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public MgBaseShape() : this(touchvgPINVOKE.new_MgBaseShape(), true) {
    SwigDirectorConnect();
  }

  public static int Type() {
    int ret = touchvgPINVOKE.MgBaseShape_Type();
    return ret;
  }

  public static Tol minTol() {
    Tol ret = new Tol(touchvgPINVOKE.MgBaseShape_minTol(), false);
    return ret;
  }

  public MgBaseShape cloneShape() {
    IntPtr cPtr = touchvgPINVOKE.MgBaseShape_cloneShape(swigCPtr);
    MgBaseShape ret = (cPtr == IntPtr.Zero) ? null : new MgBaseShape(cPtr, false);
    return ret;
  }

  public virtual void setOwner(MgShape owner) {
    if (SwigDerivedClassHasMethod("setOwner", swigMethodTypes7)) touchvgPINVOKE.MgBaseShape_setOwnerSwigExplicitMgBaseShape(swigCPtr, MgShape.getCPtr(owner)); else touchvgPINVOKE.MgBaseShape_setOwner(swigCPtr, MgShape.getCPtr(owner));
  }

  public virtual Box2d getExtent() {
    Box2d ret = new Box2d((SwigDerivedClassHasMethod("getExtent", swigMethodTypes8) ? touchvgPINVOKE.MgBaseShape_getExtentSwigExplicitMgBaseShape(swigCPtr) : touchvgPINVOKE.MgBaseShape_getExtent(swigCPtr)), true);
    return ret;
  }

  public virtual int getChangeCount() {
    int ret = (SwigDerivedClassHasMethod("getChangeCount", swigMethodTypes9) ? touchvgPINVOKE.MgBaseShape_getChangeCountSwigExplicitMgBaseShape(swigCPtr) : touchvgPINVOKE.MgBaseShape_getChangeCount(swigCPtr));
    return ret;
  }

  public virtual void resetChangeCount(int count) {
    if (SwigDerivedClassHasMethod("resetChangeCount", swigMethodTypes10)) touchvgPINVOKE.MgBaseShape_resetChangeCountSwigExplicitMgBaseShape(swigCPtr, count); else touchvgPINVOKE.MgBaseShape_resetChangeCount(swigCPtr, count);
  }

  public virtual void afterChanged() {
    if (SwigDerivedClassHasMethod("afterChanged", swigMethodTypes11)) touchvgPINVOKE.MgBaseShape_afterChangedSwigExplicitMgBaseShape(swigCPtr); else touchvgPINVOKE.MgBaseShape_afterChanged(swigCPtr);
  }

  public virtual void update() {
    if (SwigDerivedClassHasMethod("update", swigMethodTypes12)) touchvgPINVOKE.MgBaseShape_updateSwigExplicitMgBaseShape(swigCPtr); else touchvgPINVOKE.MgBaseShape_update(swigCPtr);
  }

  public virtual void transform(Matrix2d mat) {
    if (SwigDerivedClassHasMethod("transform", swigMethodTypes13)) touchvgPINVOKE.MgBaseShape_transformSwigExplicitMgBaseShape(swigCPtr, Matrix2d.getCPtr(mat)); else touchvgPINVOKE.MgBaseShape_transform(swigCPtr, Matrix2d.getCPtr(mat));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  public virtual void clear() {
    if (SwigDerivedClassHasMethod("clear", swigMethodTypes14)) touchvgPINVOKE.MgBaseShape_clearSwigExplicitMgBaseShape(swigCPtr); else touchvgPINVOKE.MgBaseShape_clear(swigCPtr);
  }

  public virtual void clearCachedData() {
    if (SwigDerivedClassHasMethod("clearCachedData", swigMethodTypes15)) touchvgPINVOKE.MgBaseShape_clearCachedDataSwigExplicitMgBaseShape(swigCPtr); else touchvgPINVOKE.MgBaseShape_clearCachedData(swigCPtr);
  }

  public virtual int getPointCount() {
    int ret = touchvgPINVOKE.MgBaseShape_getPointCount(swigCPtr);
    return ret;
  }

  public virtual Point2d getPoint(int index) {
    Point2d ret = new Point2d(touchvgPINVOKE.MgBaseShape_getPoint(swigCPtr, index), true);
    return ret;
  }

  public virtual void setPoint(int index, Point2d pt) {
    touchvgPINVOKE.MgBaseShape_setPoint(swigCPtr, index, Point2d.getCPtr(pt));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  public virtual bool isClosed() {
    bool ret = (SwigDerivedClassHasMethod("isClosed", swigMethodTypes19) ? touchvgPINVOKE.MgBaseShape_isClosedSwigExplicitMgBaseShape(swigCPtr) : touchvgPINVOKE.MgBaseShape_isClosed(swigCPtr));
    return ret;
  }

  public virtual bool isCurve() {
    bool ret = touchvgPINVOKE.MgBaseShape_isCurve(swigCPtr);
    return ret;
  }

  public virtual float hitTest(Point2d pt, float tol, MgHitResult res) {
    float ret = touchvgPINVOKE.MgBaseShape_hitTest(swigCPtr, Point2d.getCPtr(pt), tol, MgHitResult.getCPtr(res));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public float hitTest2(Point2d pt, float tol, Point2d nearpt) {
    float ret = touchvgPINVOKE.MgBaseShape_hitTest2(swigCPtr, Point2d.getCPtr(pt), tol, Point2d.getCPtr(nearpt));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool hitTestBox(Box2d rect) {
    bool ret = (SwigDerivedClassHasMethod("hitTestBox", swigMethodTypes22) ? touchvgPINVOKE.MgBaseShape_hitTestBoxSwigExplicitMgBaseShape(swigCPtr, Box2d.getCPtr(rect)) : touchvgPINVOKE.MgBaseShape_hitTestBox(swigCPtr, Box2d.getCPtr(rect)));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool draw(int mode, GiGraphics gs, GiContext ctx, int segment) {
    bool ret = (SwigDerivedClassHasMethod("draw", swigMethodTypes23) ? touchvgPINVOKE.MgBaseShape_drawSwigExplicitMgBaseShape(swigCPtr, mode, GiGraphics.getCPtr(gs), GiContext.getCPtr(ctx), segment) : touchvgPINVOKE.MgBaseShape_draw(swigCPtr, mode, GiGraphics.getCPtr(gs), GiContext.getCPtr(ctx), segment));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool save(MgStorage s) {
    bool ret = (SwigDerivedClassHasMethod("save", swigMethodTypes24) ? touchvgPINVOKE.MgBaseShape_saveSwigExplicitMgBaseShape(swigCPtr, MgStorage.getCPtr(s)) : touchvgPINVOKE.MgBaseShape_save(swigCPtr, MgStorage.getCPtr(s)));
    return ret;
  }

  public virtual bool load(MgShapeFactory factory, MgStorage s) {
    bool ret = (SwigDerivedClassHasMethod("load", swigMethodTypes25) ? touchvgPINVOKE.MgBaseShape_loadSwigExplicitMgBaseShape(swigCPtr, MgShapeFactory.getCPtr(factory), MgStorage.getCPtr(s)) : touchvgPINVOKE.MgBaseShape_load(swigCPtr, MgShapeFactory.getCPtr(factory), MgStorage.getCPtr(s)));
    return ret;
  }

  public virtual int getHandleCount() {
    int ret = (SwigDerivedClassHasMethod("getHandleCount", swigMethodTypes26) ? touchvgPINVOKE.MgBaseShape_getHandleCountSwigExplicitMgBaseShape(swigCPtr) : touchvgPINVOKE.MgBaseShape_getHandleCount(swigCPtr));
    return ret;
  }

  public virtual Point2d getHandlePoint(int index) {
    Point2d ret = new Point2d((SwigDerivedClassHasMethod("getHandlePoint", swigMethodTypes27) ? touchvgPINVOKE.MgBaseShape_getHandlePointSwigExplicitMgBaseShape(swigCPtr, index) : touchvgPINVOKE.MgBaseShape_getHandlePoint(swigCPtr, index)), true);
    return ret;
  }

  public virtual bool setHandlePoint(int index, Point2d pt, float tol) {
    bool ret = (SwigDerivedClassHasMethod("setHandlePoint", swigMethodTypes28) ? touchvgPINVOKE.MgBaseShape_setHandlePointSwigExplicitMgBaseShape(swigCPtr, index, Point2d.getCPtr(pt), tol) : touchvgPINVOKE.MgBaseShape_setHandlePoint(swigCPtr, index, Point2d.getCPtr(pt), tol));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public virtual bool isHandleFixed(int index) {
    bool ret = (SwigDerivedClassHasMethod("isHandleFixed", swigMethodTypes29) ? touchvgPINVOKE.MgBaseShape_isHandleFixedSwigExplicitMgBaseShape(swigCPtr, index) : touchvgPINVOKE.MgBaseShape_isHandleFixed(swigCPtr, index));
    return ret;
  }

  public virtual int getHandleType(int index) {
    int ret = (SwigDerivedClassHasMethod("getHandleType", swigMethodTypes30) ? touchvgPINVOKE.MgBaseShape_getHandleTypeSwigExplicitMgBaseShape(swigCPtr, index) : touchvgPINVOKE.MgBaseShape_getHandleType(swigCPtr, index));
    return ret;
  }

  public virtual bool offset(Vector2d vec, int segment) {
    bool ret = (SwigDerivedClassHasMethod("offset", swigMethodTypes31) ? touchvgPINVOKE.MgBaseShape_offsetSwigExplicitMgBaseShape(swigCPtr, Vector2d.getCPtr(vec), segment) : touchvgPINVOKE.MgBaseShape_offset(swigCPtr, Vector2d.getCPtr(vec), segment));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool getFlag(MgShapeBit bit) {
    bool ret = touchvgPINVOKE.MgBaseShape_getFlag(swigCPtr, (int)bit);
    return ret;
  }

  public virtual void setFlag(MgShapeBit bit, bool on) {
    if (SwigDerivedClassHasMethod("setFlag", swigMethodTypes32)) touchvgPINVOKE.MgBaseShape_setFlagSwigExplicitMgBaseShape(swigCPtr, (int)bit, on); else touchvgPINVOKE.MgBaseShape_setFlag(swigCPtr, (int)bit, on);
  }

  public override void copy(MgObject src) {
    if (SwigDerivedClassHasMethod("copy", swigMethodTypes1)) touchvgPINVOKE.MgBaseShape_copySwigExplicitMgBaseShape(swigCPtr, MgObject.getCPtr(src)); else touchvgPINVOKE.MgBaseShape_copy(swigCPtr, MgObject.getCPtr(src));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  public override bool equals(MgObject src) {
    bool ret = (SwigDerivedClassHasMethod("equals", swigMethodTypes4) ? touchvgPINVOKE.MgBaseShape_equalsSwigExplicitMgBaseShape(swigCPtr, MgObject.getCPtr(src)) : touchvgPINVOKE.MgBaseShape_equals(swigCPtr, MgObject.getCPtr(src)));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override bool isKindOf(int type) {
    bool ret = (SwigDerivedClassHasMethod("isKindOf", swigMethodTypes6) ? touchvgPINVOKE.MgBaseShape_isKindOfSwigExplicitMgBaseShape(swigCPtr, type) : touchvgPINVOKE.MgBaseShape_isKindOf(swigCPtr, type));
    return ret;
  }

  public override void addRef() {
    if (SwigDerivedClassHasMethod("addRef", swigMethodTypes3)) touchvgPINVOKE.MgBaseShape_addRefSwigExplicitMgBaseShape(swigCPtr); else touchvgPINVOKE.MgBaseShape_addRef(swigCPtr);
  }

  public void setExtent(Box2d rect) {
    touchvgPINVOKE.MgBaseShape_setExtent(swigCPtr, Box2d.getCPtr(rect));
    if (touchvgPINVOKE.SWIGPendingException.Pending) throw touchvgPINVOKE.SWIGPendingException.Retrieve();
  }

  private void SwigDirectorConnect() {
    if (SwigDerivedClassHasMethod("clone", swigMethodTypes0))
      swigDelegate0 = new SwigDelegateMgBaseShape_0(SwigDirectorclone);
    if (SwigDerivedClassHasMethod("copy", swigMethodTypes1))
      swigDelegate1 = new SwigDelegateMgBaseShape_1(SwigDirectorcopy);
    if (SwigDerivedClassHasMethod("release", swigMethodTypes2))
      swigDelegate2 = new SwigDelegateMgBaseShape_2(SwigDirectorrelease);
    if (SwigDerivedClassHasMethod("addRef", swigMethodTypes3))
      swigDelegate3 = new SwigDelegateMgBaseShape_3(SwigDirectoraddRef);
    if (SwigDerivedClassHasMethod("equals", swigMethodTypes4))
      swigDelegate4 = new SwigDelegateMgBaseShape_4(SwigDirectorequals);
    if (SwigDerivedClassHasMethod("getType", swigMethodTypes5))
      swigDelegate5 = new SwigDelegateMgBaseShape_5(SwigDirectorgetType);
    if (SwigDerivedClassHasMethod("isKindOf", swigMethodTypes6))
      swigDelegate6 = new SwigDelegateMgBaseShape_6(SwigDirectorisKindOf);
    if (SwigDerivedClassHasMethod("setOwner", swigMethodTypes7))
      swigDelegate7 = new SwigDelegateMgBaseShape_7(SwigDirectorsetOwner);
    if (SwigDerivedClassHasMethod("getExtent", swigMethodTypes8))
      swigDelegate8 = new SwigDelegateMgBaseShape_8(SwigDirectorgetExtent);
    if (SwigDerivedClassHasMethod("getChangeCount", swigMethodTypes9))
      swigDelegate9 = new SwigDelegateMgBaseShape_9(SwigDirectorgetChangeCount);
    if (SwigDerivedClassHasMethod("resetChangeCount", swigMethodTypes10))
      swigDelegate10 = new SwigDelegateMgBaseShape_10(SwigDirectorresetChangeCount);
    if (SwigDerivedClassHasMethod("afterChanged", swigMethodTypes11))
      swigDelegate11 = new SwigDelegateMgBaseShape_11(SwigDirectorafterChanged);
    if (SwigDerivedClassHasMethod("update", swigMethodTypes12))
      swigDelegate12 = new SwigDelegateMgBaseShape_12(SwigDirectorupdate);
    if (SwigDerivedClassHasMethod("transform", swigMethodTypes13))
      swigDelegate13 = new SwigDelegateMgBaseShape_13(SwigDirectortransform);
    if (SwigDerivedClassHasMethod("clear", swigMethodTypes14))
      swigDelegate14 = new SwigDelegateMgBaseShape_14(SwigDirectorclear);
    if (SwigDerivedClassHasMethod("clearCachedData", swigMethodTypes15))
      swigDelegate15 = new SwigDelegateMgBaseShape_15(SwigDirectorclearCachedData);
    if (SwigDerivedClassHasMethod("getPointCount", swigMethodTypes16))
      swigDelegate16 = new SwigDelegateMgBaseShape_16(SwigDirectorgetPointCount);
    if (SwigDerivedClassHasMethod("getPoint", swigMethodTypes17))
      swigDelegate17 = new SwigDelegateMgBaseShape_17(SwigDirectorgetPoint);
    if (SwigDerivedClassHasMethod("setPoint", swigMethodTypes18))
      swigDelegate18 = new SwigDelegateMgBaseShape_18(SwigDirectorsetPoint);
    if (SwigDerivedClassHasMethod("isClosed", swigMethodTypes19))
      swigDelegate19 = new SwigDelegateMgBaseShape_19(SwigDirectorisClosed);
    if (SwigDerivedClassHasMethod("isCurve", swigMethodTypes20))
      swigDelegate20 = new SwigDelegateMgBaseShape_20(SwigDirectorisCurve);
    if (SwigDerivedClassHasMethod("hitTest", swigMethodTypes21))
      swigDelegate21 = new SwigDelegateMgBaseShape_21(SwigDirectorhitTest);
    if (SwigDerivedClassHasMethod("hitTestBox", swigMethodTypes22))
      swigDelegate22 = new SwigDelegateMgBaseShape_22(SwigDirectorhitTestBox);
    if (SwigDerivedClassHasMethod("draw", swigMethodTypes23))
      swigDelegate23 = new SwigDelegateMgBaseShape_23(SwigDirectordraw);
    if (SwigDerivedClassHasMethod("save", swigMethodTypes24))
      swigDelegate24 = new SwigDelegateMgBaseShape_24(SwigDirectorsave);
    if (SwigDerivedClassHasMethod("load", swigMethodTypes25))
      swigDelegate25 = new SwigDelegateMgBaseShape_25(SwigDirectorload);
    if (SwigDerivedClassHasMethod("getHandleCount", swigMethodTypes26))
      swigDelegate26 = new SwigDelegateMgBaseShape_26(SwigDirectorgetHandleCount);
    if (SwigDerivedClassHasMethod("getHandlePoint", swigMethodTypes27))
      swigDelegate27 = new SwigDelegateMgBaseShape_27(SwigDirectorgetHandlePoint);
    if (SwigDerivedClassHasMethod("setHandlePoint", swigMethodTypes28))
      swigDelegate28 = new SwigDelegateMgBaseShape_28(SwigDirectorsetHandlePoint);
    if (SwigDerivedClassHasMethod("isHandleFixed", swigMethodTypes29))
      swigDelegate29 = new SwigDelegateMgBaseShape_29(SwigDirectorisHandleFixed);
    if (SwigDerivedClassHasMethod("getHandleType", swigMethodTypes30))
      swigDelegate30 = new SwigDelegateMgBaseShape_30(SwigDirectorgetHandleType);
    if (SwigDerivedClassHasMethod("offset", swigMethodTypes31))
      swigDelegate31 = new SwigDelegateMgBaseShape_31(SwigDirectoroffset);
    if (SwigDerivedClassHasMethod("setFlag", swigMethodTypes32))
      swigDelegate32 = new SwigDelegateMgBaseShape_32(SwigDirectorsetFlag);
    touchvgPINVOKE.MgBaseShape_director_connect(swigCPtr, swigDelegate0, swigDelegate1, swigDelegate2, swigDelegate3, swigDelegate4, swigDelegate5, swigDelegate6, swigDelegate7, swigDelegate8, swigDelegate9, swigDelegate10, swigDelegate11, swigDelegate12, swigDelegate13, swigDelegate14, swigDelegate15, swigDelegate16, swigDelegate17, swigDelegate18, swigDelegate19, swigDelegate20, swigDelegate21, swigDelegate22, swigDelegate23, swigDelegate24, swigDelegate25, swigDelegate26, swigDelegate27, swigDelegate28, swigDelegate29, swigDelegate30, swigDelegate31, swigDelegate32);
  }

  private bool SwigDerivedClassHasMethod(string methodName, Type[] methodTypes) {
    System.Reflection.MethodInfo methodInfo = this.GetType().GetMethod(methodName, System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance, null, methodTypes, null);
    bool hasDerivedMethod = methodInfo.DeclaringType.IsSubclassOf(typeof(MgBaseShape));
    return hasDerivedMethod;
  }

  private IntPtr SwigDirectorclone() {
    return MgObject.getCPtr(clone()).Handle;
  }

  private void SwigDirectorcopy(IntPtr src) {
    copy(new MgObject(src, false));
  }

  private void SwigDirectorrelease() {
    release();
  }

  private void SwigDirectoraddRef() {
    addRef();
  }

  private bool SwigDirectorequals(IntPtr src) {
    return equals(new MgObject(src, false));
  }

  private int SwigDirectorgetType() {
    return getType();
  }

  private bool SwigDirectorisKindOf(int type) {
    return isKindOf(type);
  }

  private void SwigDirectorsetOwner(IntPtr owner) {
    setOwner((owner == IntPtr.Zero) ? null : new MgShape(owner, false));
  }

  private IntPtr SwigDirectorgetExtent() {
    return Box2d.getCPtr(getExtent()).Handle;
  }

  private int SwigDirectorgetChangeCount() {
    return getChangeCount();
  }

  private void SwigDirectorresetChangeCount(int count) {
    resetChangeCount(count);
  }

  private void SwigDirectorafterChanged() {
    afterChanged();
  }

  private void SwigDirectorupdate() {
    update();
  }

  private void SwigDirectortransform(IntPtr mat) {
    transform(new Matrix2d(mat, false));
  }

  private void SwigDirectorclear() {
    clear();
  }

  private void SwigDirectorclearCachedData() {
    clearCachedData();
  }

  private int SwigDirectorgetPointCount() {
    return getPointCount();
  }

  private IntPtr SwigDirectorgetPoint(int index) {
    return Point2d.getCPtr(getPoint(index)).Handle;
  }

  private void SwigDirectorsetPoint(int index, IntPtr pt) {
    setPoint(index, new Point2d(pt, false));
  }

  private bool SwigDirectorisClosed() {
    return isClosed();
  }

  private bool SwigDirectorisCurve() {
    return isCurve();
  }

  private float SwigDirectorhitTest(IntPtr pt, float tol, IntPtr res) {
    return hitTest(new Point2d(pt, false), tol, new MgHitResult(res, false));
  }

  private bool SwigDirectorhitTestBox(IntPtr rect) {
    return hitTestBox(new Box2d(rect, false));
  }

  private bool SwigDirectordraw(int mode, IntPtr gs, IntPtr ctx, int segment) {
    return draw(mode, new GiGraphics(gs, false), new GiContext(ctx, false), segment);
  }

  private bool SwigDirectorsave(IntPtr s) {
    return save((s == IntPtr.Zero) ? null : new MgStorage(s, false));
  }

  private bool SwigDirectorload(IntPtr factory, IntPtr s) {
    return load((factory == IntPtr.Zero) ? null : new MgShapeFactory(factory, false), (s == IntPtr.Zero) ? null : new MgStorage(s, false));
  }

  private int SwigDirectorgetHandleCount() {
    return getHandleCount();
  }

  private IntPtr SwigDirectorgetHandlePoint(int index) {
    return Point2d.getCPtr(getHandlePoint(index)).Handle;
  }

  private bool SwigDirectorsetHandlePoint(int index, IntPtr pt, float tol) {
    return setHandlePoint(index, new Point2d(pt, false), tol);
  }

  private bool SwigDirectorisHandleFixed(int index) {
    return isHandleFixed(index);
  }

  private int SwigDirectorgetHandleType(int index) {
    return getHandleType(index);
  }

  private bool SwigDirectoroffset(IntPtr vec, int segment) {
    return offset(new Vector2d(vec, false), segment);
  }

  private void SwigDirectorsetFlag(int bit, bool on) {
    setFlag((MgShapeBit)bit, on);
  }

  public delegate IntPtr SwigDelegateMgBaseShape_0();
  public delegate void SwigDelegateMgBaseShape_1(IntPtr src);
  public delegate void SwigDelegateMgBaseShape_2();
  public delegate void SwigDelegateMgBaseShape_3();
  public delegate bool SwigDelegateMgBaseShape_4(IntPtr src);
  public delegate int SwigDelegateMgBaseShape_5();
  public delegate bool SwigDelegateMgBaseShape_6(int type);
  public delegate void SwigDelegateMgBaseShape_7(IntPtr owner);
  public delegate IntPtr SwigDelegateMgBaseShape_8();
  public delegate int SwigDelegateMgBaseShape_9();
  public delegate void SwigDelegateMgBaseShape_10(int count);
  public delegate void SwigDelegateMgBaseShape_11();
  public delegate void SwigDelegateMgBaseShape_12();
  public delegate void SwigDelegateMgBaseShape_13(IntPtr mat);
  public delegate void SwigDelegateMgBaseShape_14();
  public delegate void SwigDelegateMgBaseShape_15();
  public delegate int SwigDelegateMgBaseShape_16();
  public delegate IntPtr SwigDelegateMgBaseShape_17(int index);
  public delegate void SwigDelegateMgBaseShape_18(int index, IntPtr pt);
  public delegate bool SwigDelegateMgBaseShape_19();
  public delegate bool SwigDelegateMgBaseShape_20();
  public delegate float SwigDelegateMgBaseShape_21(IntPtr pt, float tol, IntPtr res);
  public delegate bool SwigDelegateMgBaseShape_22(IntPtr rect);
  public delegate bool SwigDelegateMgBaseShape_23(int mode, IntPtr gs, IntPtr ctx, int segment);
  public delegate bool SwigDelegateMgBaseShape_24(IntPtr s);
  public delegate bool SwigDelegateMgBaseShape_25(IntPtr factory, IntPtr s);
  public delegate int SwigDelegateMgBaseShape_26();
  public delegate IntPtr SwigDelegateMgBaseShape_27(int index);
  public delegate bool SwigDelegateMgBaseShape_28(int index, IntPtr pt, float tol);
  public delegate bool SwigDelegateMgBaseShape_29(int index);
  public delegate int SwigDelegateMgBaseShape_30(int index);
  public delegate bool SwigDelegateMgBaseShape_31(IntPtr vec, int segment);
  public delegate void SwigDelegateMgBaseShape_32(int bit, bool on);

  private SwigDelegateMgBaseShape_0 swigDelegate0;
  private SwigDelegateMgBaseShape_1 swigDelegate1;
  private SwigDelegateMgBaseShape_2 swigDelegate2;
  private SwigDelegateMgBaseShape_3 swigDelegate3;
  private SwigDelegateMgBaseShape_4 swigDelegate4;
  private SwigDelegateMgBaseShape_5 swigDelegate5;
  private SwigDelegateMgBaseShape_6 swigDelegate6;
  private SwigDelegateMgBaseShape_7 swigDelegate7;
  private SwigDelegateMgBaseShape_8 swigDelegate8;
  private SwigDelegateMgBaseShape_9 swigDelegate9;
  private SwigDelegateMgBaseShape_10 swigDelegate10;
  private SwigDelegateMgBaseShape_11 swigDelegate11;
  private SwigDelegateMgBaseShape_12 swigDelegate12;
  private SwigDelegateMgBaseShape_13 swigDelegate13;
  private SwigDelegateMgBaseShape_14 swigDelegate14;
  private SwigDelegateMgBaseShape_15 swigDelegate15;
  private SwigDelegateMgBaseShape_16 swigDelegate16;
  private SwigDelegateMgBaseShape_17 swigDelegate17;
  private SwigDelegateMgBaseShape_18 swigDelegate18;
  private SwigDelegateMgBaseShape_19 swigDelegate19;
  private SwigDelegateMgBaseShape_20 swigDelegate20;
  private SwigDelegateMgBaseShape_21 swigDelegate21;
  private SwigDelegateMgBaseShape_22 swigDelegate22;
  private SwigDelegateMgBaseShape_23 swigDelegate23;
  private SwigDelegateMgBaseShape_24 swigDelegate24;
  private SwigDelegateMgBaseShape_25 swigDelegate25;
  private SwigDelegateMgBaseShape_26 swigDelegate26;
  private SwigDelegateMgBaseShape_27 swigDelegate27;
  private SwigDelegateMgBaseShape_28 swigDelegate28;
  private SwigDelegateMgBaseShape_29 swigDelegate29;
  private SwigDelegateMgBaseShape_30 swigDelegate30;
  private SwigDelegateMgBaseShape_31 swigDelegate31;
  private SwigDelegateMgBaseShape_32 swigDelegate32;

  private static Type[] swigMethodTypes0 = new Type[] {  };
  private static Type[] swigMethodTypes1 = new Type[] { typeof(MgObject) };
  private static Type[] swigMethodTypes2 = new Type[] {  };
  private static Type[] swigMethodTypes3 = new Type[] {  };
  private static Type[] swigMethodTypes4 = new Type[] { typeof(MgObject) };
  private static Type[] swigMethodTypes5 = new Type[] {  };
  private static Type[] swigMethodTypes6 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes7 = new Type[] { typeof(MgShape) };
  private static Type[] swigMethodTypes8 = new Type[] {  };
  private static Type[] swigMethodTypes9 = new Type[] {  };
  private static Type[] swigMethodTypes10 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes11 = new Type[] {  };
  private static Type[] swigMethodTypes12 = new Type[] {  };
  private static Type[] swigMethodTypes13 = new Type[] { typeof(Matrix2d) };
  private static Type[] swigMethodTypes14 = new Type[] {  };
  private static Type[] swigMethodTypes15 = new Type[] {  };
  private static Type[] swigMethodTypes16 = new Type[] {  };
  private static Type[] swigMethodTypes17 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes18 = new Type[] { typeof(int), typeof(Point2d) };
  private static Type[] swigMethodTypes19 = new Type[] {  };
  private static Type[] swigMethodTypes20 = new Type[] {  };
  private static Type[] swigMethodTypes21 = new Type[] { typeof(Point2d), typeof(float), typeof(MgHitResult) };
  private static Type[] swigMethodTypes22 = new Type[] { typeof(Box2d) };
  private static Type[] swigMethodTypes23 = new Type[] { typeof(int), typeof(GiGraphics), typeof(GiContext), typeof(int) };
  private static Type[] swigMethodTypes24 = new Type[] { typeof(MgStorage) };
  private static Type[] swigMethodTypes25 = new Type[] { typeof(MgShapeFactory), typeof(MgStorage) };
  private static Type[] swigMethodTypes26 = new Type[] {  };
  private static Type[] swigMethodTypes27 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes28 = new Type[] { typeof(int), typeof(Point2d), typeof(float) };
  private static Type[] swigMethodTypes29 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes30 = new Type[] { typeof(int) };
  private static Type[] swigMethodTypes31 = new Type[] { typeof(Vector2d), typeof(int) };
  private static Type[] swigMethodTypes32 = new Type[] { typeof(MgShapeBit), typeof(bool) };
}

}
