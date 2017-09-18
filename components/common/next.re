/*
  https://github.com/ulrikstrid/bs-next
 */

module Link = {
  external link : ReasonReact.reactClass = "default" [@@bs.module "next/link"];
  let make
      ::href=?
      ::_as=?
      prefetch::(prefetch: option Js.boolean)=?
      replace::(replace: option Js.boolean)=?
      shallow::(shallow: option Js.boolean)=?
      passHref::(passHref: option Js.boolean)=?
      children =>
    ReasonReact.wrapJsForReason
      reactClass::link
      props::
        Js.Undefined.(
          {
            "href": from_opt href,
            "as": from_opt _as,
            "prefetch": from_opt prefetch,
            "replace": from_opt replace,
            "shallow": from_opt shallow,
            "passHref": from_opt passHref
          }
        )
      children;
};

module Head = {
  external head : ReasonReact.reactClass = "default" [@@bs.module "next/head"];
  let make children =>
    ReasonReact.wrapJsForReason reactClass::head props::(Js.Obj.empty ()) children;
};

module StyledJsx = {
  external style : ReasonReact.reactClass = "default" [@@bs.module "styled-jsx/style"];

  type counter = { mutable num: int };
  let idCounter: counter = { num: 0 };
  
  let makeStyleId isGlobal => {
    let newId = "scoped-" ^ string_of_int idCounter.num;
    idCounter.num = idCounter.num + 1;
    isGlobal ? "global" : newId
  };

  let make ::global ::css => {
    let styleId = makeStyleId(global);
    let cssToPass = css;

    ReasonReact.wrapJsForReason
      reactClass::style
      props::(
        {
          "styleId": styleId,
          "css": cssToPass,
        }
      );
  }
};
