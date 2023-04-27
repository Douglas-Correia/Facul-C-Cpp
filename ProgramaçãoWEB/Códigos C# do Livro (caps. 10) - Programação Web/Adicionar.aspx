<%@ Page Title="" Language="C#" MasterPageFile="~/Principal.Master" AutoEventWireup="true" CodeBehind="Adicionar.aspx.cs" Inherits="LojaDepartamentos.WebForm4" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
<%
    if (Session["Carrinho"] == null)
        Session["Carrinho"] = new List<LojaDepartamentos.Produto>();
    int idproduto = int.Parse(Request.QueryString["idproduto"]);
    List<LojaDepartamentos.Produto> produtos =
        (List<LojaDepartamentos.Produto>)Session["Carrinho"];
    LojaDepartamentos.Produto p = produtos.Find(x => x.IdProduto == idproduto);
    if (p == null)
        produtos.Add(new LojaDepartamentos.Produto(idproduto, 1));
    else
        p.Qtde += 1;
    Session["Carrinho"] = produtos;
    Response.Redirect("Carrinho.aspx");
%>
</asp:Content>
