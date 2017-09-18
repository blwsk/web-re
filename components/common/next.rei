/*
  https://github.com/ulrikstrid/bs-next
 */

module Link: {
  external link : ReasonReact.reactClass = "default" [@@bs.module "next/link"];
  let make:
    href::'a? =>
    _as::'b? =>
    prefetch::Js.boolean? =>
    replace::Js.boolean? =>
    shallow::Js.boolean? =>
    passHref::Js.boolean? =>
    array ReasonReact.reactElement =>
    ReasonReact.component ReasonReact.stateless ReasonReact.noRetainedProps;
};

module Head: {
  external head : ReasonReact.reactClass = "default" [@@bs.module "next/head"];
  let make:
    array ReasonReact.reactElement =>
    ReasonReact.component ReasonReact.stateless ReasonReact.noRetainedProps;
};

module StyledJsx: {
  external style : ReasonReact.reactClass = "default" [@@bs.module "styled-jsx/style"];
  let make:
    global::bool =>
    css::'a =>
    array ReasonReact.reactElement =>
    ReasonReact.component ReasonReact.stateless ReasonReact.noRetainedProps;
};
